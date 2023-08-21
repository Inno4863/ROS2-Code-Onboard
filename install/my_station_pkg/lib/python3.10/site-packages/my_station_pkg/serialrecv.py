#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from more_interfaces.srv import String, Comms, Trigger
from more_interfaces.msg import Trials1
import serial
import threading
import time
import json
from time import sleep

SERIAL_PORT = '/dev/ttyUSB1'
BAUDRATE = 57600

class SerialReceiverNode(Node):
    def __init__(self):
        super().__init__('serialrecv')
        self.client_ = self.create_client(String, 'trigger_serial')
        self.ser = serial.Serial(SERIAL_PORT, BAUDRATE)
        self.get_logger().info('Serial node started')
        self.sendmission_client = self.create_client(Comms, 'goto')
        self.land_client = self.create_client(Comms, 'land')
        self.return_client = self.create_client(Comms, 'returnback')
        self.missionclear_client = self.create_client(Comms, 'clear_mission')
        self.pausemission_client = self.create_client(Comms, 'pause_mission')
        self.Coordinates_client = self.create_client(Comms, 'get_coordinates')
        self.reroute_client = self.create_client(Comms, 'reroute')
        self.turn_right_client = self.create_client(Trigger, 'turn_right')
        self.turn_left_client = self.create_client(Trigger, 'turn_left')
        self.comms_request, self.trigger_request = Comms.Request(), Trigger.Request()
        
    def serial_read_loop(self):
        while True:
            if self.ser.in_waiting:
                #print('Waiting for data....')
                try:
                   # print('swjwqh')
                    received_data_bytes = self.ser.readline().decode().strip()
                    #print('dhhsasa')

                except Exception as e:
                    print(f'error is {e}')
                else:
                    #print('Read info successfully')
                    # Convert the JSON string back to a dictionary
                    received_data = json.loads(received_data_bytes)
                    # Now you can access the data elements as before
                    print(received_data)
                    received_type = received_data["type"]
                    received_pos_longitude = received_data["data"]["x"]
                    received_pos_latitude = received_data["data"]["y"]
                    received_pos_altitude = received_data["data"]["z"]
                    self.droneComms(received_type, received_pos_longitude, received_pos_latitude, received_pos_altitude)
            time.sleep(0.1)


   

    # def send_data(self, data):
    #     try:
    #         # Convert the dictionary to a JSON string
    #         data_json_string = json.dumps(data)
    #         # Ensure data doesn't contain newline characters
    #         data_json_string = data_json_string.replace('\n', ' ')  # Replace newline with space
    #         data_json_string += '\n'  # Add newline at the end
    #         # Convert the JSON string to a bytearray
    #         data_bytes = bytearray(data_json_string, 'utf-8')
    #         # Send the bytearray over serial communication
    #         self.ser.write(data_bytes)
    #     except Exception as e:
    #         self.get_logger().error(f"Error sending data: {e}")




    def droneComms(self, msg, lon, lat, alt):
        if msg == "Goto":
            self.comms_request.message = msg
            self.comms_request.pos_longitude = lon
            self.comms_request.pos_latitude = lat
            self.comms_request.pos_altitude = alt
            self.comms_request.trigger = True
            self.sendmission_client.call_async(self.comms_request)

        if msg == "Goback":
            self.comms_request.message = 'Goback'
            self.comms_request.trigger = True
            self.return_client.call(self.comms_request)

        if msg == 'Clearmission':
            self.comms_request.message = 'Clearmission'
            self.comms_request.trigger = True
            self.missionclear_client.call_async(self.comms_request)

        if msg == 'reroute':
            self.comms_request.message = msg
            self.comms_request.pos_longitude = lon
            self.comms_request.pos_latitude = lat
            self.comms_request.pos_altitude = alt
            self.comms_request.trigger = True
            self.reroute_client.call_async(self.comms_request)

        if msg == 'turn_right':
            self.trigger_request.trigger = True
            self.turn_right_client.call_async(self.trigger_request)

        if msg == 'turn_left':
            self.trigger_request.trigger = True
            self.turn_left_client.call_async(self.trigger_request)

        if msg == 'Land':
            self.comms_request.trigger = True
            self.comms_request.message = "Land"
            self.land_client.call_async(self.comms_request)

class PubNode(Node):
    def __init__(self, serial_node):
        super().__init__('pub_node')
        self.serial_node = serial_node
        self.subscriber_telem = self.create_subscription(Trials1, 'status_update', self.data_callback, 10)

    def data_callback(self, msg):
        # print('subscribed to status update')
        #print(msg)
        data = {"is_in_air": msg.is_in_air,
                'armed': msg.armed,
                'battery': msg.battery_percentage,
                'landed_state': msg.landed_state,
                'gps': msg.gps_satellites,
                'y_coordinate': msg.pos_latitude,
                'x_coordinate': msg.pos_longitude,
                'z_coordinate': msg.pos_altitude,
                'vel_x': msg.velocity_x,
                'vel_y': msg.velocity_y,
                'vel_z': msg.velocity_z,
                'yaw': msg.current_yaw
                }
        #print(data)
        try:
            self.send_data(data)
        except Exception as e:
            self.get_logger().error(f"Error: {e}")
        else:
            pass
            #print(data)
            #self.get_logger().info(f"Message successfully sent")


    def send_data(self, data):
        # Convert the dictionary to a JSON string
        data_json_string = json.dumps(data) + '\n'
        # Convert the JSON string to a bytearray
        data_bytes = bytearray(data_json_string, 'utf-8')
        # Send the bytearray over serial communication
        self.serial_node.ser.write(data_bytes)
        time.sleep(0.3)




def main(args=None):
    rclpy.init(args=args)
    serial_node = SerialReceiverNode()
    serial_pub = PubNode(serial_node)

    # Create a thread to run the serial_read_loop function
    read_thread = threading.Thread(target=serial_node.serial_read_loop)
    read_thread.daemon = True  # Set the thread as a daemon so it exits when the main program exits
    read_thread.start()  # Start the thread

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(serial_node)
    executor.add_node(serial_pub)
    try:
        executor.spin()
    finally:
        executor.shutdown()
        serial_node.destroy()
        serial_pub.shutdown()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
