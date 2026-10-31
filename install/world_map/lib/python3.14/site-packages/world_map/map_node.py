
import rclpy
from rclpy.node import Node
import random
from custom_msgs.msg import Info
import matplotlib.pyplot as plt
import numpy as np


class MapNode(Node):
    def __init__(self):
        super().__init__('map_node')

        self.declare_parameter('length', 1000)
        self.declare_parameter('width', 1000)

        self.map = None
        self.roughness = None
        self.muddiness = None
        self.wetness = None

        self.length = self.get_parameter('length').value
        self.width = self.get_parameter('width').value

        self.createMap(self.length, self.width)

        self.declare_parameter('spawn_x', 0)
        self.declare_parameter('spawn_y', 0)

        self.rover = Info()
        self.rover.x = self.get_parameter('spawn_x').value
        self.rover.y = self.get_parameter('spawn_y').value

        self.printMap(self.length, self.width)

        # Visualize all four arrays
        self.visualizeMap()

    def createMap(self, length, width):

        self.map = [[0.0 for _ in range(width)] for _ in range(length)]
        self.roughness = [[0.0 for _ in range(width)] for _ in range(length)]
        self.muddiness = [[0.0 for _ in range(width)] for _ in range(length)]
        self.wetness = [[0.0 for _ in range(width)] for _ in range(length)]

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
                    avg = (self.map[i-1][j] + self.map[i][j-1] + self.map[i-1][j-1]) / 3

                random_value = random.uniform(-noise, noise)
                self.map[i][j] = (influence * avg + (1 - influence) * 0.0 + random_value)

        for i in range(length):
            for j in range(width):
                self.roughness[i][j] = random.uniform(0, 1)
                self.muddiness[i][j] = random.uniform(0, 1)
                self.wetness[i][j] = random.uniform(0, 1)

    def printMap(self, length, width):

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
            ax.set_xlabel("X")
            ax.set_ylabel("Y")

        plt.tight_layout()
        plt.show()


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
