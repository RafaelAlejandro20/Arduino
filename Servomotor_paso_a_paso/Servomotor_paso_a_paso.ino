#include <Stepper.h>
int stepsPerRevolution = 2048;
int modSpeed = 10;
Stepper MyStepper(stepsPerRevolution,8,10,9,11);
void setup() {
  MyStepper.setSpeed(modSpeed);
}

void loop() {
  MyStepper.step(0);
}
