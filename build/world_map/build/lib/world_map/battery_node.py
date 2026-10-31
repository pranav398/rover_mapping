import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
from custom_msgs.srv import Battery

class BatteryNode(Node):
    def __init__(self):
        super().__init__('battery_node')
        self.declare_parameter('max_battery', 100)
        self.battery = self.get_parameter('max_battery').value
        self.pub = self.create_publisher(Int32, '/rover/battery', 10)
        self.timer = self.create_timer(0.5, self.publish)

        self.srv = self.create_service(Battery, '/rover/update_battery', self.updateBattery)

    def publish(self):
        self.pub.publish(Int32(data=self.battery))

    def updateBattery(self, request, response):
        deduct = request.deduction
        if self.battery - deduct < 0:
            response.accepted = False
            response.reason = "Battery Finished"
        else:
            self.battery -= deduct
            response.accepted = True
            response.reason = "Completed"

        return response


def main():
    rclpy.init()
    node = BatteryNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.try_shutdown()