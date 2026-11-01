from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'world_map'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Pranav Bagrecha',
    maintainer_email='pranavb030908@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'map_node=world_map.map_node:main',
            'battery_node=world_map.battery_node:main',
            'explore_node=world_map.explore_node:main',
            'switch_mode_client=world_map.switch_mode_client:main',
        ],
    },
)
