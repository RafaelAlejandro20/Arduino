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
  Serial.println("Que angulo quieres?");
  while(Serial.available() == 0){
  }
  posPin = Serial.parseInt();
  MyServo.write(posPin);
}
