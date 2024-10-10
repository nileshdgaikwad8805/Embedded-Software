
int potPin = A0;
int readValue;
int led = 3;

void setup(){
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(led,OUTPUT);

}

void loop(){
  readValue = analogRead(potPin);
  Serial.print("The value is = ");
  Serial.println(readValue);
  delay(500);
  analogWrite(led,readValue);
}