//This code can be used for any purpose.

#include <Servo.h> //Using servo library to control ESC

Servo ESC1,Servo1; //Creating a servo class with name as esc

int pos = 0; //Sets position variable

int buttonPin;
void arm(){

setSpeed(0); //Sets speed variable delay(1000);

}

void setSpeed(int speed){

int angle = map(speed, 0, 100, 0, 180); //maps servo  to different speeds as percentage

ESC1.write(angle);

}

void setup() {

ESC1.attach(6); //Adds ESC to certain pin.
Servo1.attach(3); // Adds Servo to pin
buttonPin = 7; //This is the button that will start the sequence
  pinMode(buttonPin, INPUT_PULLUP);
arm();

}

void loop() {
Servo1.write(0); // Sets the servo to initial position of ()
 if(digitalRead(buttonPin) == LOW)
 {
int speed; // speed variable

for(speed = 0; speed <= 70; speed += 5) { //Cycles speed up to 70% power for 1 second

setSpeed(speed); //Creates variable for speed to be used in in for loop

delay(100);

}

delay(2000); //Stays on for () ms
Servo1.write(90); // Sets the servo to final position
delay(2000); //Keeps the motor on while the bottom has been opened

for(speed = 70; speed > 0; speed -= 5) { // Cycles speed down to 0% power for 1 second

setSpeed(speed);

delay(100);
}
delay(5000); //keeps the servo open
Servo1.write(0); //Sets the servo back to initial position
delay(100000000000); // delays the motor, essentially stops the loop. 
 }
}
