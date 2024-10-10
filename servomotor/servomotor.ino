#include<Servo.h>
int outPin = 6;
int pos = 0;
int servoDelay = 25;

Servo myPointer;

void setup(){
  
Serial.begin(9600);
myPointer.attach(outPin);
}



void loop(){
  for (pos = 0; pos <= 180; pos = pos + 1){
    myPointer.write(pos);
    delay(servoDelay); 
  }
  
  for (pos = 180; pos >= 0; pos = pos - 1){
    myPointer.write(pos);
    delay(servoDelay); 
  }
}