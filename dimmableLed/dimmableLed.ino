
int potPin = A0;
int readValue;
int led = 3;
int outvtg;

void setup(){
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(led,OUTPUT);

}

void loop(){
  readValue = analogRead(potPin);
  outvtg = 255./1023. * readValue;
  Serial.print("The value is = ");
  Serial.println(readValue);
  Serial.println(outvtg);
  delay(500);
  analogWrite(led,outvtg);
}