//Incluir bibliotecas
#include <Stepper.h>
//Movimiento del servomotor
int stepsPerRevolution = 2048;
int modSpeed = 13;
Stepper MyStepper(stepsPerRevolution,8,10,9,11);
int dt = 1500;
void setup() {
  MyStepper.setSpeed(modSpeed);
}

void loop() {
//Mover servomotor
  MyStepper.step(stepsPerRevolution);
  delay(dt);
//Cambiar sentido
  MyStepper.step(-stepsPerRevolution);
  delay(dt);
}
