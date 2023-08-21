from setuptools import setup

package_name = 'my_station_pkg'

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
    maintainer='spiderweb',
    maintainer_email='Inno4863',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'drone_comms_node = my_station_pkg.drone_comms_node:main',
            "telemetrypoll_node = my_station_pkg.telemetrypoll_node:main",
            "serialrecv = my_station_pkg.serialrecv:main",
            "video_node = my_station_pkg.video_node:main"

        ],
    },
)
