from setuptools import setup

package_name = 'hri_signals'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],   # Python package (hri_signals/ folder with __init__.py)
    data_files=[
        # ROS2 needs these so colcon/ament can index and find the package
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),

        # Install the package.xml file
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],  # Standard dependency for ROS2 Python packages
    zip_safe=True,
    maintainer='becky',
    maintainer_email='behomely0409@gmail.com',
    description='Python nodes for HRI demo (publisher/subscriber)',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            # "command_name = module:function"
            # These names are used in "ros2 run hri_signals <command_name>"
            'human_signal_pub = hri_signals.human_signal_pub:main',
            'robot_action_sub = hri_signals.robot_action_sub:main',
        ],
    },
)