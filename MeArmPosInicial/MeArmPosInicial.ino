// Código para auxiliar a montagem do MeArm
// Posiciona os servos na posição inicial (90o)
// Autor: Danilo Pereira

#include <Servo.h>

Servo servo1; //cria um objeto servo
Servo servo2; //cria um objeto servo
Servo servo3; //cria um objeto servo
Servo servo4; //cria um objeto servo

void setup() {
  servo1.attach(6);// Anexa o servo, no pino 6, ao objeto servo (lógico)
  servo2.attach(9);// Anexa o servo, no pino 9, ao objeto servo (lógico)
  servo3.attach(10);// Anexa o servo, no pino 10, ao objeto servo (lógico)
  servo4.attach(11);// Anexa o servo, no pino 11, ao objeto servo (lógico)

  servo1.write(90);//Coloca servo na posição inicial
  servo2.write(90);//Coloca servo na posição inicial
  servo3.write(90);//Coloca servo na posição inicial
  servo4.write(90);//Coloca servo na posição inicial

}

void loop() {
}

