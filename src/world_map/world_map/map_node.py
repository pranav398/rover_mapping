import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
import math
import random
from custom_msgs.msg import Fov, Info
from custom_msgs.srv import Battery, Move
import matplotlib.pyplot as plt
import numpy as np
from std_msgs.msg import Float32


class MapNode(Node):
    def __init__(self):
        super().__init__('map_node')

        self.declare_parameter('length', 1000)
        self.declare_parameter('width', 1000)
        self.declare_parameter('fov', 5)

        self.map = None
        self.roughness = None
        self.muddiness = None
        self.wetness = None

        self.length = self.get_parameter('length').value
        self.width = self.get_parameter('width').value
        self.fov = self.get_parameter('fov').value
        self.declare_parameter('target_rad', 5)
        self.target_rad = self.get_parameter('target_rad').value

        self.createMap(self.length, self.width)
        self.generateCoordinates()

        self.rover = Info()
        self.rover.x = self.spawn_x
        self.rover.y = self.spawn_y
        self.battery_received = False

        self.srv = self.create_service(Move, '/rover/move', self.move)
        self.sub = self.create_subscription(Float32, '/rover/battery', self.updateBattery, 10)
        self.battery_client = self.create_client(Battery, '/rover/update_battery', callback_group=ReentrantCallbackGroup(),)
        self.fov_publisher = self.create_publisher(Fov, '/rover/fov', 10)
        self.fov_timer = self.create_timer(0.5, self.publishFov)
        self.gui_timer = self.create_timer(0.05, self.processGuiEvents)

        # self.printMap(self.length, self.width)
        self.visualizeMap()

    def generateCoordinates(self):
        if self.length < 1 or self.width < 1:
            raise ValueError('Map length and width must be positive')
        if self.target_rad < 1:
            raise ValueError('target_rad must be a positive integer')
        if not isinstance(self.target_rad, int):
            raise ValueError('target_rad must be an integer')
        if 2 * self.target_rad + 1 > min(self.length, self.width):
            raise ValueError('Target square must fit entirely inside the map')

        radius = self.target_rad
        max_offset = math.ceil(2.0 * radius)
        for _ in range(10000):
            self.goal_x = random.randrange(self.length)
            self.goal_y = random.randrange(self.width)
            valid_target_x = range(max(radius, self.goal_x - radius), min(self.length - radius - 1, self.goal_x + radius) + 1,)
            valid_target_y = range(max(radius, self.goal_y - radius), min(self.width - radius - 1, self.goal_y + radius) + 1,)
            
            if valid_target_x.start >= valid_target_x.stop or valid_target_y.start >= valid_target_y.stop:
                continue

            self.target_x = random.choice(valid_target_x)
            self.target_y = random.choice(valid_target_y)
            
            if self.wetness[self.goal_x][self.goal_y] > 0.8:
                continue

            valid_spawns = []
            for dx in range(-max_offset, max_offset + 1):
                for dy in range(-max_offset, max_offset + 1):
                    distance = max(abs(dx), abs(dy)) + (math.sqrt(2) - 1) * min(abs(dx), abs(dy))
                    if not 1.5 * radius <= distance <= 2.0 * radius:
                        continue

                    spawn_x = self.goal_x + dx
                    spawn_y = self.goal_y + dy
                    if not (0 <= spawn_x < self.length and 0 <= spawn_y < self.width):
                        continue
                    if abs(spawn_x - self.target_x) <= radius and abs(spawn_y - self.target_y) <= radius:
                        continue
                    if self.wetness[spawn_x][spawn_y] > 0.8:
                        continue
                    has_walkable_neighbor = any(
                        0 <= spawn_x + step_x < self.length
                        and 0 <= spawn_y + step_y < self.width
                        and self.wetness[spawn_x + step_x][spawn_y + step_y] <= 0.8
                        for step_x in (-1, 0, 1)
                        for step_y in (-1, 0, 1)
                        if (step_x, step_y) != (0, 0)
                    )
                    if not has_walkable_neighbor:
                        continue
                    valid_spawns.append((spawn_x, spawn_y))

            if valid_spawns:
                self.spawn_x, self.spawn_y = random.choice(valid_spawns)
                self.get_logger().info(
                    f'Generated world coordinates: '
                    f'goal=({self.goal_x}, {self.goal_y}), '
                    f'target=({self.target_x}, {self.target_y}), '
                    f'radius={radius}, spawn=({self.spawn_x}, {self.spawn_y})'
                )
                return

        raise ValueError(
            'Could not generate valid goal, target, and spawn coordinates for '
            f'map {self.length}x{self.width} with target_rad={radius}'
        )

    def createMap(self, length, width):
        self.map = [[None for _ in range(width)] for _ in range(length)]
        self.roughness = [[0.0 for _ in range(width)] for _ in range(length)]
        self.muddiness = [[0.0 for _ in range(width)] for _ in range(length)]
        self.wetness = [[0.0 for _ in range(width)] for _ in range(length)]

        noise = 0.5
        influence = 0.95

        center_x = (length - 1) / 2
        center_y = (width - 1) / 2

        cx = round(center_x)
        cy = round(center_y)
        self.map[cx][cy] = 0.0

        coordinates = []

        for i in range(length):
            for j in range(width):
                if i == cx and j == cy:
                    continue

                distance = ((i - center_x) ** 2 + (j - center_y) ** 2) ** 0.5
                coordinates.append((distance, i, j))

        coordinates.sort()
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]

        for _, i, j in coordinates:
            neighbors = []

            for di, dj in directions:
                ni = i + di
                nj = j + dj

                if (0 <= ni < length and 0 <= nj < width and self.map[ni][nj] is not None):
                    neighbors.append(self.map[ni][nj])

            if neighbors:
                avg = sum(neighbors) / len(neighbors)
            else:
                avg = 0.0

            random_value = random.uniform(-noise, noise)
            self.map[i][j] = influence * avg + random_value

        for i in range(length):
            for j in range(width):
                self.roughness[i][j] = random.uniform(0, 1)
                self.muddiness[i][j] = random.uniform(0, 1)
                self.wetness[i][j] = random.uniform(0, 1)

    def updateBattery(self, msg):
        self.rover.battery = float(msg.data)
        self.battery_received = True

    def publishFov(self):
        if not self.battery_received:
            return

        fov_message = Fov()
        fov_message.x = self.rover.x
        fov_message.y = self.rover.y
        fov_message.battery = self.rover.battery
        fov_message.fov_size = self.fov
        fov_message.target_x = self.target_x
        fov_message.target_y = self.target_y
        fov_message.target_rad = self.target_rad

        map_layers = (
            (self.map, fov_message.height, 100.0),
            (self.roughness, fov_message.roughness, -1.0),
            (self.muddiness, fov_message.muddiness, -1.0),
            (self.wetness, fov_message.wetness, -1.0),
        )
        half_fov = self.fov // 2

        for layer, output, outside_value in map_layers:
            for x_offset in range(-half_fov, half_fov + 1):
                map_x = self.rover.x + x_offset
                for y_offset in range(-half_fov, half_fov + 1):
                    map_y = self.rover.y + y_offset
                    is_inside_map = (
                        0 <= map_x < self.length and 0 <= map_y < self.width
                    )
                    if is_inside_map:
                        output.append(float(layer[map_x][map_y]))
                    else:
                        output.append(outside_value)

        for x_offset in range(-half_fov, half_fov + 1):
            map_x = self.rover.x + x_offset
            for y_offset in range(-half_fov, half_fov + 1):
                map_y = self.rover.y + y_offset
                fov_message.goal_cells.append(
                    0 <= map_x < self.length
                    and 0 <= map_y < self.width
                    and map_x == self.goal_x
                    and map_y == self.goal_y
                )

        self.fov_publisher.publish(fov_message)

    def printMap(self):
        arrays = {
            "map.height.txt": self.map,
            "map.roughness.txt": self.roughness,
            "map.muddiness.txt": self.muddiness,
            "map.wetness.txt": self.wetness
        }

        for filename, data in arrays.items():
            with open(filename, "w") as file:
                for row in data:
                    for value in row:
                        file.write(f"{value:8.3f} ")
                    file.write("\n")

        self.get_logger().info("All maps successfully saved!")

    def visualizeMap(self):
        height = np.array(self.map)
        roughness = np.array(self.roughness)
        muddiness = np.array(self.muddiness)
        wetness = np.array(self.wetness)

        # Create 2x2 subplot
        fig, axes = plt.subplots(2, 2, figsize=(12, 10))

        # Height map
        im1 = axes[0, 0].imshow(height, cmap='terrain')
        axes[0, 0].set_title("Height Map")
        self.rover_marker, = axes[0, 0].plot(
            self.rover.y,
            self.rover.x,
            marker='*',
            color='black',
            markersize=12,
            markeredgecolor='white',
            markeredgewidth=0.8,
        )
        fig.colorbar(im1, ax=axes[0, 0])

        # Roughness map
        im2 = axes[0, 1].imshow(roughness, cmap='viridis', vmin=0, vmax=1)
        axes[0, 1].set_title("Roughness Map")
        fig.colorbar(im2, ax=axes[0, 1])

        # Muddiness map
        im3 = axes[1, 0].imshow(muddiness, cmap='YlOrBr', vmin=0, vmax=1)
        axes[1, 0].set_title("Muddiness Map")
        fig.colorbar(im3, ax=axes[1, 0])

        # Wetness map
        im4 = axes[1, 1].imshow(wetness, cmap='Blues', vmin=0, vmax=1)
        axes[1, 1].set_title("Wetness Map")
        fig.colorbar(im4, ax=axes[1, 1])

        # Common formatting
        for ax in axes.flat:
            ax.set_xlabel("Y")
            ax.set_ylabel("X")

        plt.tight_layout()
        self.map_figure = fig
        plt.show(block=False)

    def updateRoverMarker(self):
        self.rover_marker.set_data([self.rover.y], [self.rover.x])
        self.map_figure.canvas.draw_idle()

    def processGuiEvents(self):
        plt.pause(0.001)

    async def move(self, request, response):
        if not self.battery_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error('Battery Node unavailable')
            response.accepted = False
            response.reason = "Battery Node unavailable"
            return response

        batteryRequest = Battery.Request()
        batteryRequest.deduction = request.deduction
        batteryResponse = await self.battery_client.call_async(batteryRequest)

        response.accepted = batteryResponse.accepted
        response.reason = batteryResponse.reason

        if batteryResponse.accepted:
            self.rover.x += request.delta_x
            self.rover.y += request.delta_y
            self.updateRoverMarker()

        return response

def main():
    rclpy.init()
    node = MapNode()

    try:
        rclpy.spin(node)

    except KeyboardInterrupt:
        pass

    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    main()
