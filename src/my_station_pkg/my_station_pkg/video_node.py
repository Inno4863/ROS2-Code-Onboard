import rclpy
from rclpy.node import Node
import cv2
from flask import Flask, Response

app = Flask(__name__)

class VideoFeed:
    def __init__(self):
        self.cap = cv2.VideoCapture(0)

    def __del__(self):
        self.cap.release()

    def get_frame(self):
        success, frame = self.cap.read()
        if success:
            ret, jpeg = cv2.imencode('.jpg', frame)
            return jpeg.tobytes()
        else:
            return None

video_feed = VideoFeed()

def generate():
    while True:
        frame = video_feed.get_frame()
        if frame is not None:
            yield (b'--frame\r\n'
                   b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n\r\n')

@app.route('/video_feed')
def video():
    return Response(generate(),
                    mimetype='multipart/x-mixed-replace; boundary=frame')

class VideoStreamNode(Node):
    def __init__(self):
        super().__init__('video_node')
        self.get_logger().info('Video Stream Node has started.')

        # Start the Flask app
        app.run(host='0.0.0.0', port='8080')

def main(args=None):
    rclpy.init(args=args)
    video_stream_node = VideoStreamNode()
    rclpy.spin(video_stream_node)
    video_stream_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
