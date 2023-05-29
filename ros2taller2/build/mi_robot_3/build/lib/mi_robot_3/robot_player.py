import serial
import time
import rclpy
from rclpy.node import Node
from mi_robot_servicio.srv import Player

global senales
senales= str("")
global llamar
llamar= False

class Robot_player(Node):
    def __init__(self):
        super().__init__('robot_player')
        self.service = self.create_service(Player, "player", self.handle_request)
        self.get_logger().info('Servicio Listo')
        self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
        #global senales

        self.timer = self.create_timer(1, self.replicar)
    def handle_request(self, request, response):
        global senales,  llamar
        senales = request.player
        llamar= True
        response.sum= True
        return response

    def replicar(self):

        if llamar == True:
            print("hola")
            with open(senales, 'r') as f:

                line = f.readline()
                while line:
                    self.get_logger().info(format(line.strip()))
                    self.ser.write(line.encoder())
def main(args=None):
    rclpy.init(args=args)
    robot_player = Robot_player()
    rclpy.spin(robot_player)
    robot_player.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':

    main()
