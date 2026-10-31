import rclpy
from rclpy.node import Node
from std_msgs import int32
from custom_msgs import Battery

class BatteryNode(Node):
    def __init__(self):
        super().__init__('battery_node')
        self.declare_parameter('max_battery', 100)
        self.battery = self.get_parameter('max_battery')
        self.pub = self.create_publisher(int32, '/rover/battery')
        self.timer = self.create_timer(0.5, self.publish)

        self.srv = self.create_service(Battery, '/rover/update_battery', self.updateBattery)

    def publish(self):
        self.pub.publish(self.battery)

    def updateBattery(self, request, response):
        deduct = request.deduction