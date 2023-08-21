import asyncio
import rclpy
from rclpy.node import Node
from more_interfaces.msg import Trials1
from mavsdk import System

class TelemSubNode(Node):
    def __init__(self):
        super().__init__('telemetrypoll_node')
        self.drone = System()
        self.loop = asyncio.get_event_loop()
        self.loop.run_until_complete(self.connect_to_drone())
        self.publisher_ = self.create_publisher(Trials1, 'status_update', 10)
        self.msg = Trials1()
        asyncio.ensure_future(self.get_battery())
        asyncio.ensure_future(self.get_armed_state())
        asyncio.ensure_future(self.get_gps_info())
        asyncio.ensure_future(self.get_in_air())
        asyncio.ensure_future(self.get_position())
        asyncio.ensure_future(self.get_velocity())
        asyncio.ensure_future(self.get_yaw_angle())
        asyncio.ensure_future(self.get_flight_mode())
        asyncio.ensure_future(self.get_landed_state())
        self.loop.run_forever()

    async def connect_to_drone(self):
        self.get_logger().info('Waiting for the drone to connect...')

        try:
            await self._connect_to_drone()
        except Exception as e:
            self.get_logger().error(f"Drone connection failed: {str(e)}")

        self.get_logger().info('Drone connected')

    async def _connect_to_drone(self):
        await self.drone.connect(system_address = "serial:///dev/ttyUSB0:57600")


    async def get_battery(self):
        async for battery in self.drone.telemetry.battery():
            self.msg.battery_percentage = battery.remaining_percent
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_armed_state(self):
        async for armed in self.drone.telemetry.armed():
            self.msg.armed = armed
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_gps_info(self):
        async for gps_info in self.drone.telemetry.gps_info():
            self.msg.gps_satellites = gps_info.num_satellites
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)


    async def get_in_air(self):
        async for in_air in self.drone.telemetry.in_air():
            self.msg.is_in_air = in_air
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)


    async def get_position(self):
        async for position in self.drone.telemetry.position():
            self.msg.pos_longitude = position.longitude_deg
            self.msg.pos_latitude = position.latitude_deg
            self.msg.pos_altitude = position.relative_altitude_m
            self.msg.rel_altitude = position.absolute_altitude_m
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_velocity(self):
         async for velocity in self.drone.telemetry.velocity_ned():
            self.msg.velocity_x = velocity.north_m_s
            self.msg.velocity_y = velocity.east_m_s
            self.msg.velocity_z = velocity.down_m_s
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_yaw_angle(self):
         async for yaw_info in self.drone.telemetry.attitude_euler():
            self.msg.current_yaw = yaw_info.yaw_deg
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_flight_mode(self):
         async for flight_info in self.drone.telemetry.flight_mode():
            self.msg.flight_mode = self.flight_mode_check(flight_info)
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    async def get_landed_state(self):
        async for land_detected in self.drone.telemetry.landed_state():
            self.msg.landed_state = self.landing_state_check(land_detected)
            self.publisher_.publish(self.msg)
            #await asyncio.sleep(0.1)

    def landing_state_check(self, lander_state):
        landing_states = {
            lander_state.ON_GROUND: 0,
            lander_state.IN_AIR: 2,
            lander_state.TAKING_OFF: 1,
            lander_state.LANDING: 3,
            lander_state.UNKNOWN: 4
        }

        return landing_states.get(lander_state, 4)  # Default to 4 if the key is not found


    def flight_mode_check(self, flight_info):
        flight_modes = {
            flight_info.HOLD: 3,
            flight_info.MISSION: 4,
            flight_info.TAKEOFF: 2,
            flight_info.LAND: 6,
            flight_info.RETURN_TO_LAUNCH: 5,
            flight_info.ACRO: 8
        }

        self.flight_mode = flight_modes.get(flight_info, 9)  # Default to 9 if the key is not found
        return self.flight_mode


def main(args=None):
    rclpy.init(args=args)
    node =TelemSubNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()