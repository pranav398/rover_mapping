def next_step(self):
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
    W, L = self.width, self.length
    px, py = self.x, self.y

    cx = min(max(int(self.destination[0]), 0), W - 1)
    cy = min(max(int(self.destination[1]), 0), L - 1)
    rad = int(self.radius)
    x0, x1 = max(0, cx - rad), min(W - 1, cx + rad)
    y0, y1 = max(0, cy - rad), min(L - 1, cy + rad)

    def in_map(a, b):
        return 0 <= a < W and 0 <= b < L

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
        return base + (at(self.height, *to) - at(self.height, *frm))

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