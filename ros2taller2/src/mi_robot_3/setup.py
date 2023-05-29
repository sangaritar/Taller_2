from setuptools import setup

package_name = 'mi_robot_3'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robotica',
    maintainer_email='angaritar0806@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'robot_teleop = mi_robot_3.robot_teleop:main',
            'robot_interfaces = mi_robot_3.robot_interfaces:main',
            'robot_interfaces_N = mi_robot_3.robot_interfaces_N:main',
            'robot_player= mi_robot_3.robot_player:main',
        ],
    },
)
