#include <Servo.h> ññ dede.4ergllgrg4elr

//Defino los pines 
#define pinBase 12//pin servo base
#define pinDerecha 11//pin servo derecha
#define pinIzquierda 10//pin servo izquierda
#define pinMano 9//pin servo mano
//Declaro los motores
Servo motorBase;//declarar el servo de la base
Servo motorDerecha;//declarar el servo de la derecha
Servo motorIzquierda;//declarar el servo de la izquierda
Servo motorMano;//declarar el servo de la mano


void setup() {
  
  //Base
  motorBase.attach(pinBase);
  motorBase.write(0);
  delay(2000);//espere dos segundos
  motorBase.write(90);
  delay(2000);//espere dos segundos
  motorBase.write(180);
  delay(2000);//espere dos segungos


  //servo derecha(adelante atras)
  
  motorDerecha.attach(pinDerecha);
  motorDerecha.write(10);
  delay(2000);//espere dos segundos
  motorDerecha.write(90);
  delay(2000);//espere dos segundos
  motorDerecha.write(170);
  delay(2000);//espere dos segundos
  
  
  //servo izquierda(arriba abajo)
  
  motorIzquierda.attach(pinIzquierda);
  motorIzquierda.write(180);
  delay(2000);//espere dos segundos
  motorIzquierda.write(90);
  delay(2000);//espere dos segundos
  motorIzquierda.write(0);
  delay(2000);//espere dos segundos

  //servo mano

  motorMano.attach(pinMano);
  motorMano.write(180);
  delay(2000);//espere dos segundos
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
