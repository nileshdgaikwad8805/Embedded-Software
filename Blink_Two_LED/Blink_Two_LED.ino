int redLed = 10;
int blueLed = 11;



void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(blueLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed,HIGH);
  delay(1000);
  digitalWrite(redLed,LOW);
  delay(1000);


  digitalWrite(blueLed,HIGH);
  delay(1000);
  digitalWrite(blueLed,LOW);
  delay(1000);

}
