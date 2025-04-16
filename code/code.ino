//#include <AccelStepper.h>
#include <Servo.h>
// Define motor pins
const int stepPin = 0;
const int dirPin = 4;

Servo servo1;
Servo servo2;
int servoPin = 9;
int servoPin2 = 8;
int potPin = A0;
int potPin2 = A1;

int pos = 0;
int pos2 = 70;
// Create an instance of the AccelStepper library
//AccelStepper stepper(1, stepPin, dirPin);

void setup() {
// put your setup code here, to run once:
servo1.attach(servoPin);
servo2.attach(servoPin2);
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
// in steps of 1 degree
servo1.write(pos); 
delay(15); 
}
for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
servo1.write(pos); 
delay(15); } 

for (pos2 = 70; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
// in steps of 1 degree
servo2.write(pos2); // tell servo to go to position in variable 'pos'
delay(15); 
}
for (pos2 = 180; pos2 >= 70; pos2 -= 1) { // goes from 180 degrees to 0 degrees
servo2.write(pos2); // tell servo to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position
}
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
// in steps of 1 degree
servo1.write(pos); 
delay(15); 
}
for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
servo1.write(pos); 
delay(15); } 

for (pos2 = 70; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
// in steps of 1 degree
servo2.write(pos2); // tell servo to go to position in variable 'pos'
delay(15); 
}
for (pos2 = 180; pos2 >= 70; pos2 -= 1) { // goes from 180 degrees to 0 degrees
servo2.write(pos2); // tell servo to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position
}


}

void loop() {
// put your main code here, to run repeatedly:

}
