int trigPin = 6;
int echoPin = 5;
long duration;
int distance;


void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

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
  
  delay(1000);
  
}