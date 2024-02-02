#include <Stepper.h>
int stepsPerRevolution = 2048;
int modSpeed = 10;
Stepper MyStepper(stepsPerRevolution,8,10,9,11);
int dt = 1500;
void setup() {
  MyStepper.setSpeed(modSpeed);
}

void loop() {
  MyStepper.step(stepsPerRevolution);
  delay(dt);
  MyStepper.step(stepsPerRevolution);
  delay(dt);
}
