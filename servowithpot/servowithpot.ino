#include<Servo.h>
int outPin = 6;
int pos = 0;
int potPin = A0;
int servoDelay = 250;

Servo myPointer;

void setup(){
  
Serial.begin(9600);
myPointer.attach(outPin);
pinMode(potPin,INPUT);
}



void loop(){
  
  pos = analogRead(potPin);
  pos = (180./1023.) * pos ;
  Serial.println("potvalue = ");
  Serial.println(pos);
  
  myPointer.write(pos);
  delay(servoDelay);
  

  }
