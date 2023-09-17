// Include the Arduino Stepper Library
#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 20;

// Create Instance of Stepper library
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);


void setup()
{
  // set the speed at 60 rpm:
  myStepper.setSpeed(360);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{

  delay(5000);
  
  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(360);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

  delay(5000);
  
  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(360);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);
  
  delay(5000);
  
  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(360);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

// --------------------------------

  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);
  
  myStepper.setSpeed(60);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);
  // ----------------------------------

  myStepper.setSpeed(360);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(60);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

    myStepper.setSpeed(360);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(60);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

    myStepper.setSpeed(360);
  delay(2000);

  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  delay(2000);
  myStepper.setSpeed(60);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  myStepper.step(stepsPerRevolution);
  delay(2000);

  
}
