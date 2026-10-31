import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
import random
from custom_msgs.msg import Fov, Info
from custom_msgs.srv import Battery, Move
import matplotlib.pyplot as plt
import numpy as np
from std_msgs.msg import Int32


class MapNode(Node):
    def __init__(self):
        super().__init__('map_node')

        self.declare_parameter('length', 100)
        self.declare_parameter('width', 100)
        self.declare_parameter('fov', 5)

        self.map = None
        self.roughness = None
        self.muddiness = None
        self.wetness = None

        self.length = self.get_parameter('length').value
        self.width = self.get_parameter('width').value
        self.fov = self.get_parameter('fov').value

        self.createMap(self.length, self.width)

        self.declare_parameter('spawn_x', 0)
        self.declare_parameter('spawn_y', 0)

        self.rover = Info()
        self.rover.x = self.get_parameter('spawn_x').value
        self.rover.y = self.get_parameter('spawn_y').value

        self.srv = self.create_service(Move, '/rover/move', self.move)
        self.sub = self.create_subscription(Int32, '/rover/battery', self.updateBattery, 10)
        self.battery_client = self.create_client(Battery, '/rover/update_battery', callback_group=ReentrantCallbackGroup(),)
        self.fov_publisher = self.create_publisher(Fov, '/rover/fov', 10)
        self.fov_timer = self.create_timer(0.5, self.publishFov)

        # self.printMap(self.length, self.width)
        self.visualizeMap()

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
        self.rover.battery = msg.data

    def publishFov(self):
        fov_message = Fov()
        fov_message.x = self.rover.x
        fov_message.y = self.rover.y
        fov_message.fov_size = self.fov

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
                    if 0 <= map_x < self.length and 0 <= map_y < self.width:
                        output.append(float(layer[map_x][map_y]))
                    else:
                        output.append(outside_value)

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
            marker='o',
            color='black',
            markersize=6,
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
