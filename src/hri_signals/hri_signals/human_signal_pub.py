import rclpy                                # ROS2 Python client library
from rclpy.node import Node                 # Base Node class
from hri_signals_interfaces.msg import HumanSignal     # Import custom message type

class HumanSignalPublisher(Node):
    def __init__(self):
        # Initialize the node with the name "human_signal_pub"
        super().__init__('human_signal_pub')

        # Create a publisher that will publish "HumanSignal" messages
        # Topic name: "human_signal", Queue size: 10
        self.publisher_ = self.create_publisher(HumanSignal, 'human_signal', 10)

        # Timer that triggers the callback every 1.0 second
        self.timer = self.create_timer(1.0, self.timer_callback)

        # Counter to change message content over time
        self.count = 0

    def timer_callback(self):
        # Create a new HumanSignal message
        msg = HumanSignal()

        # Cycle through 4 gestures (help, stop, neutral, greeting)
        gestures = ["help", "stop", "neutral", "greeting"]
        msg.gesture = gestures[self.count % 4]

        # Assign intensity (0–9) based on counter
        msg.intensity = self.count % 10

        # Publish the message
        self.publisher_.publish(msg)

        # Print log to the terminal
        self.get_logger().info(f"Publishing: gesture={msg.gesture}, intensity={msg.intensity}")

        # Increment counter
        self.count += 1

def main(args=None):
    # Initialize ROS2 communication
    rclpy.init(args=args)

    # Create node instance
    node = HumanSignalPublisher()

    # Keep the node alive and processing callbacks
    rclpy.spin(node)

    # Destroy node after shutdown
    node.destroy_node()
    rclpy.shutdown()

# Entry point
if __name__ == '__main__':
    main()
