import rclpy
from rclpy.node import Node
from hri_signals_interfaces.msg import HumanSignal     # Import custom message

class RobotActionSubscriber(Node):
    def __init__(self):
        # Initialize the node with the name "robot_action_sub"
        super().__init__('robot_action_sub')

        # Create a subscriber that listens to "human_signal" topic
        # When a message arrives, "listener_callback" is called
        self.subscription = self.create_subscription(
            HumanSignal,                   # Message type
            'human_signal',                # Topic name
            self.listener_callback,        # Callback function
            10)                            # Queue size

        # Prevent unused variable warning
        self.subscription  

    def listener_callback(self, msg):
        # Decide robot's response based on the received gesture
        if msg.gesture == "help":
            action = "Robot moving to assist 🚑"
        elif msg.gesture == "stop":
            action = "Robot stopping immediately ⛔"
        elif msg.gesture == "greeting":
            action = "Robot waving hello 👋"
        else:
            action = "Robot standing by 🤖"

        # Print log message
        self.get_logger().info(
            f"Received: gesture={msg.gesture}, intensity={msg.intensity} → {action}"
        )

def main(args=None):
    # Initialize ROS2 communication
    rclpy.init(args=args)

    # Create node instance
    node = RobotActionSubscriber()

    # Keep the node alive and processing callbacks
    rclpy.spin(node)

    # Destroy node after shutdown
    node.destroy_node()
    rclpy.shutdown()

# Entry point
if __name__ == '__main__':
    main()
