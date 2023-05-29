import rclpy

from geometry_msgs.msg import Twist

from std_msgs.msg import Float32

from std_msgs.msg import String

from rclpy.node import Node

from pynput import keyboard as kb

import time



class Robot_teleop(Node):
    presionado = False
   
    def __init__(self):

        super().__init__('robot_teleop')

        self.pubcmd = self.create_publisher(Twist, 'robot_cmdVel', 10)

        lineal = input(" Ingrese la velocidad lineal:")

        print("El valor ingresado es:" , lineal)

        self.lineal = float(lineal)

        angular = input("Ingrese la velocidad angular:")

        print("El valor ingresado es:" , angular)

        self.angular = float(angular)

        self.tiempo_tecla = float()
        
        self.presionado = False
        


    def on_press(self, key):
        
        twistMessage = Twist()

        

        try:

            if key == kb.KeyCode.from_char('w') and (not self.presionado):
                self.presionado = True
                twistMessage.linear.x = self.lineal
                self.pubcmd.publish(twistMessage)
                
            elif key == kb.KeyCode.from_char('d') and (not self.presionado):
                self.presionado = True
                twistMessage.angular.z = -self.angular
                self.pubcmd.publish(twistMessage)

            elif key == kb.KeyCode.from_char('s') and (not self.presionado):
                self.presionado = True
                twistMessage.linear.x = -self.lineal
                self.pubcmd.publish(twistMessage)

               
            elif key == kb.KeyCode.from_char('a') and (not self.presionado):
                self.presionado = True
                twistMessage.angular.z = self.angular
                self.pubcmd.publish(twistMessage)


            


        except:

            print("No sirve esa tecla")



            

    def on_release(self, key):
    	if self.presionado:
            self.presionado = False
            twistMessage = Twist()
            self.pubcmd.publish(twistMessage)

def main():

    rclpy.init()

    robot_teleop = Robot_teleop()

    with kb.Listener(robot_teleop.on_press, robot_teleop.on_release) as escuchador:

        escuchador.join()

    rclpy.spin(robot_teleop)

    robot_teleop.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':

    main()



     
