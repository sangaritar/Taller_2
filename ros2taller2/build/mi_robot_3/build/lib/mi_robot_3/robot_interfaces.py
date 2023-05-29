import serial,time
import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node

class Robot_interfaces(Node):

    def __init__(self):

        super().__init__('robot_interface')

        

        self.subscription_velocity = self.create_subscription(Twist, 'robot_cmdVel', self.listener_callback_velocity, 10)  

        self.subscription_velocity

        self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)

    
    def listener_callback_velocity(self, msg):

        self.get_logger().info(str(msg.linear.x))

        self.get_logger().info(str(msg.angular.z))

        

        vellineal = msg.linear.x

        velangular = msg.angular.z

        #Delante
        if vellineal > 0:
            #input_str = "{},{},{}".format('q',vellineal, 0)
            input_str = ('w ' + str(vellineal) + ' ' + str(0) + 'p')
            self.ser.write(input_str.encode())
            print(input_str)

        #Atras
        if vellineal < 0:
            #input_str = "{},{},{}".format('s',vellineal, 0)
            input_str = ('s ' + str(vellineal) + ' ' + str(0) + 'p')
            self.ser.write(input_str.encode())
            print(input_str)
            

        #Derecha

        if velangular > 0:
            input_str = ('a ' + str(0) + ' ' + str(velangular) + 'p')
            #input_str = "{},{},{}".format('d',0, velangular)
            self.ser.write(input_str.encode())

        #Izquierda

        if velangular < 0:
            input_str = ('d ' + str(0) + ' '  + str(velangular) + 'p')
            #input_str = "{},{},{}".format('a',0,velangular)
            self.ser.write(input_str.encode())


        #Parar
        
        if velangular == 0 and vellineal == 0:
            input_str = ('q ' + str(0) + ' '  + str(0) + 'p')
            #input_str = "{},{},{}".format('q',0,0)
            self.ser.write(input_str.encode())



def main(args=None):

        rclpy.init(args=args)

        robot_interfaces = Robot_interfaces()
        rclpy.spin(robot_interfaces)
        rclpy.shutdown()
       

if __name__ == '__main__':

        main()

