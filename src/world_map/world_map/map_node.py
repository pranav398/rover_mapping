import rclpy
from rclpy.node import Node

class MapNode(Node):
    def __init__(Node):
        super().__init__('map_node')

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