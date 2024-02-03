#include <Servo.h>
int servoPin = 8;
int posPin = 0;
Servo MyServo;
void setup() {
//Ingreso de variables
  MyServo.attach(servoPin);
  Serial.begin(9600);
}
void loop() {
//Llamada a variable
  Serial.println("Que angulo quieres?");
//Ingreso de datos
  while(Serial.available() == 0){
  }
//Cambio de valor
  posPin = Serial.parseInt();
  MyServo.write(posPin);
}
