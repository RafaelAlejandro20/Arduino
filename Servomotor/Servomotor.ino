#include <servo.h>
int servoPin = 8;
int posPin = 90;
Servo MyServo;
void setup() {
  MyServo.attach(servoPin);
  Serial.begin(9600);
}
void loop() {
  MyServero.write(posPin);
}
