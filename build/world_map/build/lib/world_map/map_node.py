import rclpy
from rclpy.node import Node
import random

class MapNode(Node):
    def __init__(self):
        super().__init__('map_node')
        self.declare_parameter('length', 1000)
        self.declare_parameter('width', 1000)
        self.map = None
        self.length = self.get_parameter('length').value
        self.width = self.get_parameter('width').value
        self.createMap(self.length, self.width)
        self.printMap(self.length, self.width)

    def createMap(self, length, width):
        self.map = [[0.0 for _ in range(width)] for _ in range(length)]

        noise = 0.5
        influence = 0.95

        for i in range(length):
            for j in range(width):

                if i == 0 and j == 0:
                    continue

                elif i == 0:
                    avg = self.map[i][j-1]

                elif j == 0:
                    avg = self.map[i-1][j]

                else:
                    avg = (
                        self.map[i-1][j] +
                        self.map[i][j-1] +
                        self.map[i-1][j-1]
                    ) / 3

                random_value = random.uniform(-noise, noise)

                self.map[i][j] = (
                    influence * avg +
                    (1 - influence) * 0.0 +
                    random_value
                )

    def printMap(self, length, width):
        with open("generated_map.txt", "w") as file:
            for i in range(length):
                for j in range(width):
                    file.write(f"{self.map[i][j]:8.3f} ")
                file.write("\n")

        self.get_logger().info("Map successfully saved to generated_map.txt")

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