//char inputString[30];
//int stringIndex = 0;
//char letraTeclado;
//int ros2_lineal;
//int ros2_angular;


// Definir pines encoder


#define Encoder1A 5
#define Encoder1B 4
#define Encoder2A 3
#define Encoder2B 2

// Declarar pines
int EnA=10;
int EnB=11;
int inA1=6;
int inA2=7;
int inB1=8;
int inB2=9;

// Declaración de parametros

#define PI 3.1415926535897932384626433832795  

// Información de las llantas

int N = 20 ;                                              // # de Ticks del encoder
float diametro = 2*PI*3.25;                                 // Diametro llanta (cm) (2*pi*radio)
float distancia_entre_llantas = 20.5 ;                       // Distancia de las llantas (cm)



// Dirección del encoder (reloj = true , contrareloj = false)
boolean direccion_derecho = true;
boolean direccion_izquierdo = true;


// Variable tick

volatile unsigned ticks_actual = 0;                     
volatile unsigned ticks_anterior = 0;
volatile unsigned tick = 0;

volatile int tickUno = 0;                                // Contador muestreo encoder derecha
volatile int tickDos = 0;                                // Contador muestreo encoder izquierdo

// Variables odometria
volatile int distancia_central = 0;                      // Dsitancia recorrida central
volatile int  llantaD_distancia = 0;                     // Distancia recorrida llanta derecha
volatile int  llantaI_distancia = 0;                     // Distancia recorrida llanta izquierda

float x = 0;                                            // distancia eje X
float y = 0;                                            // distancia eje Y
float phi = 0;     


// Rangos de velocidad y PWM
int velocidad_min = 100;
int velocidad_max = 40;
int pwm_min = 0;
int pwm_max = 255;



void setup() {

  //Datos encoder

  pinMode(Encoder1A , INPUT);
  pinMode(Encoder1B , INPUT);
  pinMode(Encoder2A , INPUT);
  pinMode(Encoder2B , INPUT);
  
  attachInterrupt(digitalPinToInterrupt(Encoder1A),EncoderUno,RISING);                // Interrupción en el encoder 1
  attachInterrupt(digitalPinToInterrupt(Encoder2A),EncoderDos,RISING);                // Interrupción en el encoder 2
  
   Serial.begin(9600);
}


// Llanta derecha - encoder

void EncoderUno(){
  int lectura = digitalRead(Encoder1B);
    if(lectura == LOW){
      tickUno++;
      direccion_derecho = false;
    }
    else{
      tickUno--;
      direccion_derecho = true;
    }
}

// Llanta izquierda - encoder

void EncoderDos(){

int lectura = digitalRead(Encoder2B);
    if(lectura == LOW){
      tickDos++;
      direccion_izquierdo = false;
    }
    else{
      tickDos--;
      direccion_izquierdo = true;
    }
}

void loop() {

  // Mover robot
  
if (true) {
    //    char incomingByte  = Serial.read();
      String input_str=Serial.readStringUntil('p');
     // Serial.println(input_str);

      // Pbtener primer caracter
      char letraTeclado=input_str.charAt(0);

      //obtener velocidades

      String ros2_linealE=input_str.substring(1);
      float ros2_lineal=ros2_linealE.toFloat();
      //Serial.println(ros2_lineal);

      String ros2_angularE=input_str.substring(3);
      float ros2_angular=ros2_angularE.toFloat();
      //Serial.println(ros2_angular);


      // Convertir valores en PWM
      
      int pwm_angular = map(ros2_angular, 1, 10, pwm_min, pwm_max);
      int pwm_lineal = map(ros2_lineal, 1, 10, pwm_min, pwm_max);
      pwm_angular = -1*pwm_angular;
      pwm_lineal = -1*pwm_lineal;

      
    switch(letraTeclado) {

      //Adelante
      
      case 'w':
        //moveForward();
         analogWrite(EnA,pwm_lineal); 
         analogWrite(EnB,pwm_lineal);
         digitalWrite(inA1, HIGH);
         digitalWrite(inA2, LOW);
         digitalWrite(inB1, HIGH);
         digitalWrite(inB2, LOW);
        break;

       // Atras
      case 's':
        //moveBackward();
          analogWrite(EnA,pwm_lineal); 
          analogWrite(EnB,pwm_lineal);
          digitalWrite(inA1, LOW);
          digitalWrite(inA2, HIGH);
          digitalWrite(inB1, LOW);
          digitalWrite(inB2, HIGH);
        break;

        //Izquierda
      case 'a':
        //turnLeft();
        analogWrite(EnA,pwm_angular); 
        analogWrite(EnB,pwm_angular);
        digitalWrite(inA1, LOW);
        digitalWrite(inA2, HIGH);
        digitalWrite(inB1, HIGH);
        digitalWrite(inB2, LOW);
        break;

        //Derecha
      case 'd':
        //turnRight();
          analogWrite(EnA,pwm_angular); 
          analogWrite(EnB,pwm_angular);
          digitalWrite(inA1, HIGH);
          digitalWrite(inA2, LOW);
          digitalWrite(inB1, LOW);
          digitalWrite(inB2, HIGH);
        break;

       // Quieto 
      case 'q':
        //stopMotors();
        analogWrite(EnA,0); 
        analogWrite(EnB,0);
        digitalWrite(inA1, LOW);
        digitalWrite(inA2, LOW);
        digitalWrite(inB1, LOW);
        digitalWrite(inB2, LOW);
        break;
      }
    }


    // Encoder - optometria

    ticks_actual = millis();                                                                           // Muestreo actual
   
   tick =(double) ticks_actual - ticks_anterior;                                                      // Delta del muestreo 
   
   if ( tick >= 1000) // se asegura el tiempo de muestreo
  {  
                                                                         
       llantaD_distancia = diametro*(tickUno/N);                                                     // Calculo para distancia recorrida llanta derecha
       llantaI_distancia = diametro*(tickDos/N);                                                     // Calculo para distancia recorrida llanta izquierda
    
       distancia_central = ( llantaD_distancia +  llantaI_distancia)/2;                                  // Calculo para distancia recorrida por el punto central  
    
       x = x + distancia_central*cos(phi);                                                               // Calculo para posición x actual
       y = y + distancia_central*sin(phi);                                                               // Calculo para posición y actual
       
       phi = phi + (( llantaD_distancia -  llantaI_distancia)/distancia_entre_llantas);                  // Posición angular actual
       phi = atan2(sin(phi),cos(phi));                                                                   // Posición angular actual

       ticks_anterior = ticks_actual;                                                                    // Muestreo anterior
       
       tickUno = 0;
       tickDos = 0;
                   
       Serial.print(x); 
       Serial.print(","); 
       Serial.println(y); 

        
    }
  }
