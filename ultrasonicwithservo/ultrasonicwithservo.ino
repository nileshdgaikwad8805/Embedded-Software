#include<Servo.h>


int trigPin = 6;
int echoPin = 5;
long duration;
int distance;
int servoPin= 2;


Servo myPointer;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
myPointer.attach(servoPin);

}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin,HIGH);
  distance = duration * 0.034/2;
  Serial.print("The distance is = ");
  Serial.println(distance);
  
  
  myPointer.write(distance);
  
  Serial.print("The pointer is : ");
  Serial.println(distance);
  delay(1000);
}