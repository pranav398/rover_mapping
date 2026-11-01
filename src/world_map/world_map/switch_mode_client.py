import rclpy
from custom_msgs.srv import SwitchMode
from rclpy.node import Node


class SwitchModeClient(Node):
    def __init__(self):
        super().__init__('switch_mode_client')
        self.declare_parameter('mode', False)
        self.client = self.create_client(SwitchMode, '/rover/switch_mode')

    def call_service(self):
        mode = self.get_parameter('mode').value
        if not self.client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Service /rover/switch_mode is unavailable')
            return False

        request = SwitchMode.Request()
        request.mode = mode
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)

        if not future.done():
            self.get_logger().error('Timed out waiting for /rover/switch_mode response')
            return False

        error = future.exception()
        if error is not None:
            self.get_logger().error(f'Switch mode service call failed: {error}')
            return False

        response = future.result()
        if not response.success:
            self.get_logger().error(response.message)
            return False

        self.get_logger().info(response.message)
        return True


def main():
    rclpy.init()
    node = SwitchModeClient()
    try:
        return 0 if node.call_service() else 1
    finally:
        node.destroy_node()
        rclpy.try_shutdown()


if __name__ == '__main__':
    raise SystemExit(main())
