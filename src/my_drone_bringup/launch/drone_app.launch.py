from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import TimerAction
from launch.actions import OpaqueFunction

def generate_launch_description():
    '''Create a launch description and add nodes to it'''
    ld = LaunchDescription()
    drone_comms_node = Node(
        package='my_station_pkg',
        executable='drone_comms_node',
        output='screen')

    telemetrypoll_node = Node(
        package='my_station_pkg',
        executable='telemetrypoll_node',
        output='screen'
    )

    serialrecv = Node(
        package='my_station_pkg',
        executable='serialrecv',
        output='screen'
    )
    video_node = Node(
     package='my_station_pkg',
     executable='video_node',
     output='screen'
    )



    '''Add the nodes to the launch description'''
    ld.add_action(drone_comms_node)
    ld.add_action(telemetrypoll_node)
    ld.add_action(serialrecv)
    ld.add_action(video_node)


    ld.add_action(TimerAction(period=1.0,
                              actions=[OpaqueFunction(function=lambda context: print('Delay completed.'))]))

    return ld
