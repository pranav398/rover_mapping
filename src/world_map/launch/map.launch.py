
import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    params_file = LaunchConfiguration('params_file')

    default_params = os.path.join(get_package_share_directory('world_map'), 'config', 'rover.params.yaml')

    return LaunchDescription([
        DeclareLaunchArgument('params_file', default_value=default_params, description='Common rover parameters YAML file'),
        Node(package='world_map', executable='map_node', name='map_node', parameters=[params_file]),
        Node(package='world_map', executable='battery_node', name='battery_node', parameters=[params_file]),
    ])
