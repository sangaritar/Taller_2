import serial,time
import rclpy
from geometry_msgs.msg import Twist
from rclpy.node import Node
from std_msgs.msg import Float32
from std_msgs.msg import String
import os
import tkinter as tk
from tkinter import *
from tkinter import messagebox 
from tkinter.filedialog import asksaveasfile
from tkinter import simpledialog
from tkinter import ttk
from tkinter import filedialog
import PIL 
from PIL import ImageTk, Image, ImageDraw
import sys, os
import threading
from mi_robot_servicio.srv import Player


global guardamos
guardamos = False

global ruta_txt
ruta_txt = str('')

global guardarTXT
guardarTXT = False

global leer
leer= False
global lecturaTxt
lecturaTxt= False

global p1 
p1= 0

global x_p
x_p = [250]

global y_p
y_p = [250]

class Robot_interfaces(Node):

    def __init__(self, Interfaz):

        super().__init__('robot_interfaces')

        global leer

        self.subscription_velocity = self.create_subscription(Twist, 'robot_cmdVel', self.listener_callback_velocity, 10)  

        self.subscription_velocity
        
        self.ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
        
        self.Interfaz = Interfaz
        if leer == True:
       	    self.client= self.create_client(Player, 'player')
       	    while not self.client.wait_for_service(timeout_sec=1.0):
       	        self.get_logger().info('No hay Servicio')
       	        self.send_request()


    
    def listener_callback_velocity(self, msg):

        self.get_logger().info(str(msg.linear.x))

        self.get_logger().info(str(msg.angular.z))

        

        vellineal = msg.linear.x

        velangular = msg.angular.z

        #Delante
        if vellineal > 0:
            input_str = ('w ' + str(vellineal) + ' ' + str(0) + 'p')
            self.ser.write(input_str.encode())

        #Atras
        if vellineal < 0:
            input_str = ('s ' + str(vellineal) + ' ' + str(0) + 'p')
            self.ser.write(input_str.encode())
            

        #Derecha

        if velangular > 0:
            input_str = ('a ' + str(0) + ' ' + str(velangular) + 'p')
            self.ser.write(input_str.encode())

        #Izquierda

        if velangular < 0:
            input_str = ('d ' + str(0) + ' '  + str(velangular) + 'p')
            self.ser.write(input_str.encode())


        #Parar
        
        if velangular == 0 and vellineal == 0:
            input_str = ('q ' + str(0) + ' '  + str(0) + 'p')
            self.ser.write(input_str.encode())

        # Archivo
        global guardamos
        global ruta_txt
	
        if guardamos == True:
           
            with open(ruta_txt, "a" ) as archivo: 

                print("llego")
                if vellineal > 0:
                    archivo.write("w "  + str(vellineal) + ' ' + str(0) + "p" + '\n') 
                elif vellineal < 0:
                    archivo.write("s "  + str(vellineal) + ' ' + str(0) + "p" + '\n') 
                elif velangular > 0:
                    archivo.write("a "  + str(0) + ' ' + str(velangular)  + "p"+ '\n') 
                elif velangular < 0:
                    archivo.write("d "  + str(0) + ' ' + str(velangular)  + "p" + '\n') 
                elif velangular == 0 and vellineal == 0:
                    archivo.write("q "  + str(0) + ' ' + str(0)  + "p"  + '\n') 
            
        
        #Pintar
        linea = self.ser.readline().decode('utf-8').rstrip()
        print(linea)

        global p1
        global x_p
        global y_p


        if linea:
            x, y = linea.split(",")
            x = float(x)
            y = float(y)
            print(x)
            print(y)

            self.last_x = x
            self.last_y = y 

            if x ==  0.00 and y ==  0.00:
            #Si es igual a 0 mantenga coordenadas
                x = self.last_x 
                y = self.last_y
            else:
            #Si es distinta de 0 nuevas coordenadas
                self.last_x = x
                self.last_y = y 

            
            self.get_logger().info('X:' + str(x) + ' Y:' + str(y))
            
            p1 += 1
            x_p.append(250 + int(x)*2)
            y_p.append(250 + int(y)*(-2))

            if x_p[p1 - 1] != x_p[p1] or y_p[p1 - 1] != y_p[p1]:
                self.Interfaz.draw_line(x_p[p1 - 1], y_p[p1 - 1], x_p[p1], y_p[p1])
            
            #self.Interfaz.paint_pixel(int(250 + (x - 40)* 5),  int((100 - (y - 40)) * 5 + 250))
            #self.Interfaz.paint_pixel(float(250 + float((x) * 100)), (float((y) * (-100)) + 250)) 
        

        
    def send_request(self):
        global leer
        global lecturaTxt
        self.request = Player.Request()
        self.request.player = lecturaTxt
        self.future =self.client.call_async(self.request)
        rcply.spin_until_future_complete(self,self.future)
        return self.future.result()
    

class Interfaz:

        def __init__(self): 
            self.guardar_recorrido()
            self.ventana = tk.Tk()
            self.ventana.title("Turtle Bot")
            self.ventana.configure(background = "grey")
            self.ventana.geometry("600x600")
            self.ventana.resizable(0,0)

            #Tamaño del Canvas
            canvas_width = 500
            canvas_height = 500

            #Crear canvas
            global guardarTXT
            self.canvas = tk.Canvas(self.ventana, width=canvas_width, height=canvas_height, background='white')
            guardarTXT = True
            self.canvas.pack()

            #Cuadricula del Canvas
            grid_size = 20
            for i in range(grid_size + 1):
                x = i * (canvas_width / grid_size)
                self.canvas.create_line(x, 0, x, canvas_height, fill='blue')
                y = i * (canvas_height / grid_size)
                self.canvas.create_line(0, y, canvas_width, y, fill='blue')


            self.name_entry = tk.Entry(self.ventana)
            self.label = tk.Label(self.ventana, text="Movimiento del robot")
            self.boton2 = tk.Button(self.ventana, text = "Save", command = self.save_imagen)
            self.boton3 = tk.Button(self.ventana, text = "Realizar recorrido", command = self.realizar_recorrido)
            self.x_min  =  0
            self.y_min  =  0
            self.x_max  =  10
            self.y_max  =  10
            self.label.pack()
            self.name_entry.pack()
            self.boton2.pack()
            self.boton3.pack()
            
        def draw_line(self, x_pixel, y_pixel, x_pixel1, y_pixel1):
                self.canvas.create_line(x_pixel, y_pixel, x_pixel1, y_pixel1)

        def guardar_recorrido(self):
       	    #global escribir
       	      
            root = tk.Tk()
            root.withdraw()
            global ruta_txt
            respuesta = messagebox.askquestion("Guardar archivo", "¿Desea guardar el recorrido del robot?")
            global guardamos
              
            if respuesta == "yes":
                if os.name == 'nt': # Si es Windows
                    downloads_dir = os.path.join(os.environ['USERPROFILE'], 'Downloads')
                else: # Si es Mac o Linux
                    downloads_dir = os.path.join(os.path.expanduser('~'), 'Downloads')
                        
                print('Si guardamos')
                guardamos = True
                nombre_archivo = filedialog.asksaveasfilename(defaultextension=".txt", initialdir = downloads_dir)
                ruta_txt = nombre_archivo 
                root.destroy()
        
            else:
                
                messagebox.showinfo("Advertencia", "No se guardará el recorrido del robot")
                guardamos = False
                print('No guardamos')
        
        def realizar_recorrido(self):
            global leer
       	    global lecturaTxt
            
            respuesta2 = messagebox.askquestion("Recorrido","Desea recorrer un archivo?")
                
            if respuesta2 == "yes":
                file_path= filedialog.askopenfilename(title= "Elija el archivo")
                lecturaTxt = file_path
                print(lecturaTxt)
                leer = True
                
            else:
                leer = False
                self.ventana.destroy()

        
        def start(self):       
                self.ventana.mainloop()
                

        def save_imagen(self):
                    if os.name == 'nt': # Si es Windows
                             downloads_dir = os.path.join(os.environ['USERPROFILE'], 'Downloads')
                    else: # Si es Mac o Linux
                             downloads_dir = os.path.join(os.path.expanduser('~'), 'Downloads')

                    filename = filedialog.asksaveasfilename(initialfile = str(self.name_entry.get()) + '.png',defaultextension=".png", initialdir = downloads_dir)
                    if filename:
                                x = self.canvas.winfo_rootx() + self.canvas.winfo_x()
                                y = self.canvas.winfo_rooty() + self.canvas.winfo_y()
                                x1 = x + self.canvas.winfo_width()
                                y1 = y + self.canvas.winfo_height()
                                image = Image.new("RGB", (self.canvas.winfo_width(), self.canvas.winfo_height()), "white")
                                draw = ImageDraw.Draw(image)
                                for item in self.canvas.find_all():
                                        coords = self.canvas.coords(item)
                                        x0 = coords[0]
                                        y0 = coords[1]
                                        x1 = coords[2]
                                        y1 = coords[3]
                                        draw.rectangle([x0, y0, x1, y1], fill="black")
                                image.save(filename)


                
class MyThread(threading.Thread):
    def __init__(self, node, gui):
          threading.Thread.__init__(self)
          self.node = node
          self.gui = gui
    
    def run(self):
          while True:
            rclpy.spin_once(self.node)


def main():
        rclpy.init()
        my_gui = Interfaz()
        my_node = Robot_interfaces(my_gui)
        my_thread = MyThread(my_node,my_gui)
        my_thread.start()
        my_gui.start()
        rclpy.shutdown()


if __name__ == '__main__':

        main()

