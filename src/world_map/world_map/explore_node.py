import rclpy
from rclpy.node import Node
from custom_msgs.msg import Fov
from custom_msgs.srv import Move, SwitchMode
import math
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle
from matplotlib.colors import ListedColormap
import numpy as np

class ExploreNode(Node):
    def __init__(self):
        super().__init__('explore_node')
        self.declare_parameter('length', 100)
        self.declare_parameter('width', 100)
        self.length = self.get_parameter('length').value
        self.width = self.get_parameter('width').value
        if self.length < 1 or self.width < 1:
            raise ValueError('Map length and width must be positive')

        self.mode = True
        self.fov = None
        self.x = None
        self.y = None
        self.battery = None
        self.destination = None
        self.radius = None
        self.spawn_position = None
        self.goal_position = None
        self.fov_received = False
        self.move_pending = False
        self.waiting_for_fov = False
        self.last_fov_pose = None
        self.target_pose = None
        self.exploration_complete = False
        self.height = None
        self.roughness = None
        self.muddiness = None
        self.wetness = None
        self.explored = [[False for _ in range(self.width)] for _ in range(self.length)]
        self.sub = self.create_subscription(Fov, '/rover/fov', self.updateFov, 10)
        self.move_client = self.create_client(Move, '/rover/move')
        self.timer = self.create_timer(1.0, self.moveRequest)
        self.gui_timer = self.create_timer(0.05, self.processGuiEvents)
        self.visualizeExploredMap()

        self.service = self.create_service(
            SwitchMode,
            '/rover/switch_mode',
            self.switchMode,
        )

    def switchMode(self, request, response):
        if request.mode != self.mode:
            if self.timer is not None:
                self.destroy_timer(self.timer)
            self.mode = request.mode
            callback = self.moveRequest if self.mode else self.destinationRequest
            self.timer = self.create_timer(1.0, callback)

        response.success = True
        response.message = (
            'Explore mode enabled' if self.mode else 'Destination mode enabled'
        )
        return response

    def updateFov(self, msg):
        fov = msg.fov_size
        expected_cells = fov * fov
        layers = (msg.height, msg.roughness, msg.muddiness, msg.wetness)
        if (
            fov < 3
            or fov % 2 == 0
            or any(len(layer) != expected_cells for layer in layers)
            or len(msg.goal_cells) != expected_cells
        ):
            self.get_logger().error('Received an invalid FOV size or layer length')
            return
        if not (0 <= msg.x < self.length and 0 <= msg.y < self.width):
            self.get_logger().error('Received an FOV center outside the configured map')
            return
        if (
            msg.target_rad < 1
            or not (msg.target_rad <= msg.target_x < self.length - msg.target_rad)
            or not (msg.target_rad <= msg.target_y < self.width - msg.target_rad)
        ):
            self.get_logger().error('Received invalid target-square coordinates')
            return
        half = fov // 2
        visible_goals = [
            (msg.x - half + i, msg.y - half + j)
            for i in range(fov)
            for j in range(fov)
            if msg.goal_cells[i * fov + j]
        ]
        if len(visible_goals) > 1:
            self.get_logger().error('Received multiple goal indicators in one FOV')
            return
        if visible_goals:
            goal_x, goal_y = visible_goals[0]
            if (
                not (0 <= goal_x < self.length and 0 <= goal_y < self.width)
                or abs(goal_x - msg.target_x) > msg.target_rad
                or abs(goal_y - msg.target_y) > msg.target_rad
            ):
                self.get_logger().error('Received a goal indicator outside the target square')
                return
            if self.goal_position is not None and self.goal_position != visible_goals[0]:
                self.get_logger().error('Received conflicting goal indicators')
                return

        target = (msg.target_x, msg.target_y)
        if self.destination is not None and (
            target != self.destination or msg.target_rad != self.radius
        ):
            self.get_logger().error('Target metadata changed after initialization')
            return

        self.x = msg.x
        self.y = msg.y
        if self.spawn_position is None:
            self.spawn_position = (msg.x, msg.y)
        self.battery = msg.battery
        self.fov = fov
        self.destination = target
        self.radius = msg.target_rad
        self.height = [list(msg.height[row * fov:(row + 1) * fov]) for row in range(fov)]
        self.roughness = [list(msg.roughness[row * fov:(row + 1) * fov]) for row in range(fov)]
        self.muddiness = [list(msg.muddiness[row * fov:(row + 1) * fov]) for row in range(fov)]
        self.wetness = [list(msg.wetness[row * fov:(row + 1) * fov]) for row in range(fov)]
        self.fov_received = True
        self.last_fov_pose = (self.x, self.y)

        for i in range(fov):
            map_x = self.x - half + i
            for j in range(fov):
                map_y = self.y - half + j
                if 0 <= map_x < self.length and 0 <= map_y < self.width:
                    self.explored[map_x][map_y] = True
        if visible_goals and self.goal_position is None:
            self.goal_position = visible_goals[0]
            self.get_logger().info(f'Goal discovered at {self.goal_position}')
        self.updateExploredMap()

        if self.waiting_for_fov and self.last_fov_pose == self.target_pose:
            self.waiting_for_fov = False
            self.exploration_complete = False

    def visualizeExploredMap(self):
        colors = ListedColormap(['white', 'tab:green'])
        self.explored_figure, self.explored_axes = plt.subplots(figsize=(8, 8))
        self.explored_image = self.explored_axes.imshow(
            np.asarray(self.explored, dtype=np.uint8),
            cmap=colors,
            vmin=0,
            vmax=1,
            origin='upper',
            interpolation='nearest',
        )
        self.explored_axes.set_title('Explored Map')
        self.explored_axes.set_xlabel('Y')
        self.explored_axes.set_ylabel('X')
        colorbar = self.explored_figure.colorbar(
            self.explored_image,
            ax=self.explored_axes,
            ticks=[0.25, 0.75],
        )
        colorbar.ax.set_yticklabels(['Unexplored', 'Explored'])
        self.rover_marker, = self.explored_axes.plot(
            [],
            [],
            marker='*',
            color='black',
            markersize=12,
            markeredgecolor='white',
            markeredgewidth=0.8,
            label='Rover',
        )
        self.target_marker, = self.explored_axes.plot(
            [],
            [],
            marker='*',
            color='red',
            markersize=16,
            markeredgecolor='white',
            markeredgewidth=0.8,
            label='Target',
        )
        self.goal_marker, = self.explored_axes.plot(
            [],
            [],
            marker='*',
            color='green',
            markersize=16,
            markeredgecolor='white',
            markeredgewidth=0.8,
            label='Goal',
        )
        self.spawn_marker, = self.explored_axes.plot(
            [],
            [],
            marker='*',
            color='blue',
            markersize=16,
            markeredgecolor='white',
            markeredgewidth=0.8,
            label='Spawn',
        )
        self.target_square = None
        self.explored_axes.legend(loc='upper right')
        self.explored_figure.tight_layout()
        plt.show(block=False)

    def updateExploredMap(self):
        self.explored_image.set_data(np.asarray(self.explored, dtype=np.uint8))
        self.rover_marker.set_data([self.y], [self.x])
        target_x, target_y = self.destination
        self.target_marker.set_data([target_y], [target_x])
        if self.goal_position is None:
            self.goal_marker.set_data([], [])
        else:
            goal_x, goal_y = self.goal_position
            self.goal_marker.set_data([goal_y], [goal_x])
        if self.spawn_position is None:
            self.spawn_marker.set_data([], [])
        else:
            spawn_x, spawn_y = self.spawn_position
            self.spawn_marker.set_data([spawn_y], [spawn_x])
        if self.target_square is None:
            self.target_square = Rectangle(
                (target_y - self.radius - 0.5, target_x - self.radius - 0.5),
                2 * self.radius + 1,
                2 * self.radius + 1,
                fill=False,
                edgecolor='red',
                linewidth=2,
            )
            self.explored_axes.add_patch(self.target_square)
        self.explored_figure.canvas.draw_idle()

    def processGuiEvents(self):
        plt.pause(0.001)

    def destinationRequest(self):
        if (
            not self.fov_received
            or self.move_pending
            or self.waiting_for_fov
        ):
            return

        dx, dy, cost = self.calculateDestinationMove()
        if dx == 0 and dy == 0:
            if self.goal_position == (self.x, self.y):
                self.get_logger().info('Rover has reached the goal')
            else:
                self.get_logger().info('No destination move is currently available')
            return

        self.publishRequest(dx, dy, cost)

    def calculateDestinationMove(self):
        WET_LIMIT        = 0.8
        LOS_MARGIN       = 0.2
        W_ROUGH          = 0.5
        W_MUD            = 0.5
        UNCERTAIN_CONF   = 0.5
        LOOKAHEAD_WEIGHT = 0.5
        MIN_COST         = 0.1
        AXIS_BIAS        = 1.0
        TRAVEL_SAFETY    = 1.3
        RESERVE_MARGIN   = 5.0
        EXPLORE_RATE     = 4.0
        SWEEP_SAFETY     = 1.2
        DEST_PULL        = 0.3
        TIE_GAIN         = 0.1

        half = self.fov // 2
        L, W = self.length, self.width
        px, py = self.x, self.y

        cx = min(max(int(self.destination[0]), 0), L - 1)
        cy = min(max(int(self.destination[1]), 0), W - 1)
        rad = int(self.radius)
        if self.goal_position is None:
            x0, x1 = cx - rad, cx + rad
            y0, y1 = cy - rad, cy + rad
        else:
            x0 = x1 = self.goal_position[0]
            y0 = y1 = self.goal_position[1]

        def in_map(a, b):
            return 0 <= a < L and 0 <= b < W

        def in_square(a, b):
            return x0 <= a <= x1 and y0 <= b <= y1

        def octile_d(d1, d2):
            d1, d2 = abs(d1), abs(d2)
            return d1 + d2 + (math.sqrt(2) - 2.0) * min(d1, d2)

        def octile(ax, ay, bx, by):
            return octile_d(ax - bx, ay - by)

        def dist_to_square(a, b):
            return octile_d(max(x0 - a, 0, a - x1), max(y0 - b, 0, b - y1))

        def at(mat, ox, oy):
            return mat[half + ox][half + oy]

        def exists(ox, oy):
            return (in_map(px + ox, py + oy)
                    and at(self.wetness, ox, oy) >= 0
                    and at(self.height, ox, oy) != 100)

        def walkable(ox, oy):
            return exists(ox, oy) and at(self.wetness, ox, oy) <= WET_LIMIT

        def step_cost(frm, to):
            base = 1.0 if (frm[0] == to[0] or frm[1] == to[1]) else math.sqrt(2)
            elevation_adjusted = base + (at(self.height, *to) - at(self.height, *frm))
            return max(elevation_adjusted, MIN_COST)

        def eff_cost(cost, off):
            diff = 1.0 + W_ROUGH * at(self.roughness, *off) + W_MUD * at(self.muddiness, *off)
            return max(cost, MIN_COST) * diff

        def certain(off):
            ox, oy = off
            if max(abs(ox), abs(oy)) <= 1:
                return True
            mx, my = ox / 2.0, oy / 2.0
            xs = {math.floor(mx), math.ceil(mx)} 
            ys = {math.floor(my), math.ceil(my)} 
            ref = at(self.height, 0, 0)
            return all(at(self.height, ix, iy) < ref + LOS_MARGIN for ix in xs for iy in ys)

        def new_cells(cx_, cy_, already=()):
            out = set()
            for a in range(cx_ - half, cx_ + half + 1):
                for b in range(cy_ - half, cy_ + half + 1):
                    if in_map(a, b) and not self.explored[a][b] and (a, b) not in already:
                        out.add((a, b))
            return out

        def count(cells, only_square):
            if only_square:
                return sum(1 for a, b in cells if in_square(a, b))
            return len(cells)

        def ring(r):
            for a in range(px - r, px + r + 1):
                yield a, py - r
                yield a, py + r
            for b in range(py - r + 1, py + r):
                yield px - r, b
                yield px + r, b

        def frontier_target():
            best_t, best_total = None, float("inf")
            for r in range(half + 1, max(W, L) + 1):
                if r >= best_total:
                    break
                for a, b in ring(r):
                    if in_map(a, b) and not self.explored[a][b]:
                        total = octile(px, py, a, b) + dist_to_square(a, b)
                        if total < best_total:
                            best_total, best_t = total, (a, b)
            return best_t

        uns = {(a, b) for a in range(x0, x1 + 1) for b in range(y0, y1 + 1)
            if not self.explored[a][b]}

        def sweep_cost(remaining):
            xs = [a for a, _ in remaining]
            ys = [b for _, b in remaining]
            w = max(xs) - min(xs) + 1
            h = max(ys) - min(ys) + 1

            def along(width, length):
                lanes = math.ceil(width / 5.0)
                return lanes * max(length - 4, 0) + (lanes - 1) * 5

            return SWEEP_SAFETY * max(len(remaining) / EXPLORE_RATE, min(along(w, h), along(h, w)))

        def reserve(qx, qy, remaining):
            if remaining:
                d = min(octile(qx, qy, a, b) for a, b in remaining)
                return TRAVEL_SAFETY * d + sweep_cost(remaining) + RESERVE_MARGIN
            d = dist_to_square(qx, qy)
            return 0.0 if d == 0 else TRAVEL_SAFETY * d + RESERVE_MARGIN

        moves = [(dx, dy) for dx in (-1, 0, 1) for dy in (-1, 0, 1) if (dx, dy) != (0, 0)]

        if self.goal_position == (px, py):
            return 0, 0, 0

        def eval_move(p1, cost1, seen1, only_square, stay_inside):
            g1 = count(seen1, only_square)
            ec1 = eff_cost(cost1, p1)
            score1 = g1 / ec1
            best2 = 0.0
            for m in moves:
                p2 = (p1[0] + m[0], p1[1] + m[1])
                if p2 == (0, 0) or max(abs(p2[0]), abs(p2[1])) > half:
                    continue
                if not walkable(*p2):
                    continue
                if stay_inside and not in_square(px + p2[0], py + p2[1]):
                    continue
                cost2 = step_cost(p1, p2)
                if cost1 + cost2 > self.battery:
                    continue
                g2 = count(new_cells(px + p2[0], py + p2[1], already=seen1), only_square)
                conf = 1.0 if certain(p2) else UNCERTAIN_CONF
                s2 = (g1 + conf * g2) / (ec1 + eff_cost(cost2, p2))
                best2 = max(best2, s2)
            value = score1 + LOOKAHEAD_WEIGHT * best2
            if p1[0] == 0 or p1[1] == 0:
                value *= AXIS_BIAS
            return value, ec1

        legal = []
        for p1 in moves:
            if walkable(*p1):
                c = step_cost((0, 0), p1)
                if c <= self.battery:
                    legal.append((p1, c))

        if self.goal_position is not None:
            goal_x, goal_y = self.goal_position
            current_distance = octile(px, py, goal_x, goal_y)
            progress_moves = [
                (p1, cost)
                for p1, cost in legal
                if octile(px + p1[0], py + p1[1], goal_x, goal_y) < current_distance
            ]
            if not progress_moves:
                return 0, 0, 0

            p1, cost = min(
                progress_moves,
                key=lambda item: (
                    octile(px + item[0][0], py + item[0][1], goal_x, goal_y),
                    eff_cost(item[1], item[0]),
                ),
            )
            return p1[0], p1[1], cost

        if not legal:
            return 0, 0, 0

        seen = {p1: new_cells(px + p1[0], py + p1[1]) for p1, _ in legal}
        inside_now = in_square(px, py)

        ok = [(p1, c) for p1, c in legal
            if self.battery - c >= reserve(px + p1[0], py + p1[1], uns - seen[p1])]

        if ok and not (inside_now and uns):
            scored = []
            for p1, c in ok:
                v, ec1 = eval_move(p1, c, seen[p1], False, False)
                pull = DEST_PULL * (dist_to_square(px, py)
                                    - dist_to_square(px + p1[0], py + p1[1])) / ec1
                scored.append((v, pull, ec1, p1, c))

            if max(s[0] for s in scored) > 0:
                _, _, _, p1, c = max(scored, key=lambda s: (s[0] + s[1], -s[2]))
                return p1[0], p1[1], c

            target = frontier_target()
            if target is not None:
                tx, ty = target
                d0 = octile(px, py, tx, ty)

                def frontier_key(s):
                    _, _, ec1, p1, _ = s
                    progress = d0 - octile(px + p1[0], py + p1[1], tx, ty)
                    return (progress / ec1, -ec1)

                best = max(scored, key=frontier_key)
                progress = d0 - octile(px + best[3][0], py + best[3][1], tx, ty)
                if progress > 0 or not inside_now:
                    return best[3][0], best[3][1], best[4]
                return 0, 0, 0

        if inside_now:
            sq = [(p1, c) for p1, c in legal if in_square(px + p1[0], py + p1[1])]
            if not uns or not sq:
                return 0, 0, 0
            scored = []
            for p1, c in sq:
                v, ec1 = eval_move(p1, c, seen[p1], True, True)
                scored.append((v, ec1, p1, c))
            if max(s[0] for s in scored) > 0:
                _, _, p1, c = max(scored, key=lambda s: (s[0], -s[1]))
                return p1[0], p1[1], c
            t = min(uns, key=lambda q: octile(px, py, q[0], q[1])) 
            d0 = octile(px, py, t[0], t[1])
            _, _, p1, c = max(scored, key=lambda s: ((d0 - octile(px + s[2][0], py + s[2][1], t[0], t[1])) / s[1],
                                                    -s[1]))
            return p1[0], p1[1], c

        d0 = dist_to_square(px, py)

        def travel_key(item):
            p1, c = item
            ec1 = eff_cost(c, p1)
            progress = d0 - dist_to_square(px + p1[0], py + p1[1])
            return ((progress + TIE_GAIN * len(seen[p1])) / ec1, -ec1)

        p1, c = max(legal, key=travel_key)
        return p1[0], p1[1], c

    def moveRequest(self):
        if (
            not self.fov_received
            or self.move_pending
            or self.waiting_for_fov
            or self.exploration_complete
        ):
            return

        WET_LIMIT        = 0.8
        LOS_MARGIN       = 0.2 
        W_ROUGH          = 0.5
        W_MUD            = 0.5
        UNCERTAIN_CONF   = 0.5
        LOOKAHEAD_WEIGHT = 0.5
        MIN_COST         = 0.1
        AXIS_BIAS        = 1.0
        half = self.fov // 2
        L, W = self.length, self.width

        def in_map(a, b):
            return 0 <= a < L and 0 <= b < W

        def at(mat, ox, oy):
            return mat[half + ox][half + oy]

        def exists(ox, oy):
            return (in_map(self.x + ox, self.y + oy)
                    and at(self.wetness, ox, oy) >= 0
                    and at(self.height, ox, oy) != 100)

        def walkable(ox, oy):
            return exists(ox, oy) and at(self.wetness, ox, oy) <= WET_LIMIT

        def step_cost(frm, to):
            base = 1.0 if (frm[0] == to[0] or frm[1] == to[1]) else math.sqrt(2)
            elevation_adjusted = base + (at(self.height, *to) - at(self.height, *frm))
            return max(elevation_adjusted, MIN_COST)

        def eff_cost(cost, off):
            diff = 1.0 + W_ROUGH * at(self.roughness, *off) + W_MUD * at(self.muddiness, *off)
            return max(cost, MIN_COST) * diff

        def certain(off):
            ox, oy = off
            if max(abs(ox), abs(oy)) <= 1:
                return True
            mx, my = ox / 2.0, oy / 2.0
            xs = {math.floor(mx), math.ceil(mx)}
            ys = {math.floor(my), math.ceil(my)}
            ref = at(self.height, 0, 0)
            return all(at(self.height, ix, iy) < ref + LOS_MARGIN for ix in xs for iy in ys)

        def new_cells(cx, cy, already=()):
            out = set()
            for a in range(cx - half, cx + half + 1):
                for b in range(cy - half, cy + half + 1):
                    if in_map(a, b) and not self.explored[a][b] and (a, b) not in already:
                        out.add((a, b))
            return out

        def octile(ax, ay, bx, by):
            d1, d2 = abs(ax - bx), abs(ay - by)
            return d1 + d2 + (math.sqrt(2) - 2.0) * min(d1, d2)

        def ring(r):
            for a in range(self.x - r, self.x + r + 1):
                yield a, self.y - r
                yield a, self.y + r
            for b in range(self.y - r + 1, self.y + r):
                yield self.x - r, b
                yield self.x + r, b

        def nearest_unexplored():
            for r in range(half + 1, max(W, L) + 1):
                found = [(a, b) for a, b in ring(r) if in_map(a, b) and not self.explored[a][b]]
                if found:
                    return min(found, key=lambda t: octile(self.x, self.y, t[0], t[1]))
            return None

        moves = [(dx, dy) for dx in (-1, 0, 1) for dy in (-1, 0, 1) if (dx, dy) != (0, 0)]
        candidates = []
        walkable_count = 0

        for p1 in moves:
            if not walkable(*p1):
                continue
            walkable_count += 1
            cost1 = step_cost((0, 0), p1)
            if cost1 > self.battery:
                continue

            seen1 = new_cells(self.x + p1[0], self.y + p1[1])
            g1 = len(seen1)
            ec1 = eff_cost(cost1, p1)
            score1 = g1 / ec1

            best2 = 0.0
            for m in moves:
                p2 = (p1[0] + m[0], p1[1] + m[1])
                if p2 == (0, 0) or max(abs(p2[0]), abs(p2[1])) > half:
                    continue
                if not walkable(*p2):
                    continue
                cost2 = step_cost(p1, p2)
                if cost1 + cost2 > self.battery:
                    continue
                g2 = len(new_cells(self.x + p2[0], self.y + p2[1], already=seen1))
                conf = 1.0 if certain(p2) else UNCERTAIN_CONF
                s2 = (g1 + conf * g2) / (ec1 + eff_cost(cost2, p2))
                best2 = max(best2, s2)

            value = score1 + LOOKAHEAD_WEIGHT * best2
            if p1[0] == 0 or p1[1] == 0:
                value *= AXIS_BIAS
            candidates.append((value, ec1, p1[0], p1[1], cost1))

        if not candidates:
            if walkable_count:
                self.get_logger().warning(
                    f'Found {walkable_count} walkable neighboring cells, but none are affordable '
                    f'with battery {self.battery:.2f}'
                )
            else:
                self.get_logger().warning('No walkable neighboring cells; rover cannot move')
            return

        best_value = max(c[0] for c in candidates)

        if best_value > 0:
            _, _, dx, dy, cost1 = max(candidates, key=lambda c: (c[0], -c[1]))
            self.publishRequest(dx, dy, cost1)
            return

        target = nearest_unexplored()
        if target is None:
            self.exploration_complete = True
            self.get_logger().info('Exploration complete; no unexplored cells remain')
            return
            
        tx, ty = target
        d0 = octile(self.x, self.y, tx, ty)

        def fallback_key(c):
            _, ec1, dx, dy, _ = c
            progress = d0 - octile(self.x + dx, self.y + dy, tx, ty)
            return (progress / ec1, -ec1)

        _, ec1, dx, dy, cost1 = max(candidates, key=fallback_key)
        self.publishRequest(dx, dy, cost1)

    def publishRequest(self, dx, dy, cost):
        if not self.move_client.service_is_ready():
            self.get_logger().warning('Move service is unavailable')
            return

        request = Move.Request()
        request.delta_x = dx
        request.delta_y = dy
        request.deduction = cost

        self.move_pending = True
        self.target_pose = (self.x + dx, self.y + dy)
        self.pending_cost = cost
        future = self.move_client.call_async(request)
        future.add_done_callback(self.handleMoveResponse)

    def handleMoveResponse(self, future):
        self.move_pending = False
        error = future.exception()
        if error is not None:
            self.get_logger().error(f'Move service call failed: {error}')
            return

        response = future.result()
        if response.accepted:
            self.waiting_for_fov = self.last_fov_pose != self.target_pose
            self.exploration_complete = False
            self.get_logger().info(
                f'Move to {self.target_pose} accepted; battery cost {self.pending_cost}; battery remaining {self.battery}'
            )
        else:
            self.waiting_for_fov = False
            self.get_logger().warning(response.reason)


def main():
    rclpy.init()
    node = ExploreNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()