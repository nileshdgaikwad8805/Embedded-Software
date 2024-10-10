int blueLed = 4;
int RedLed = 5;



void setup() {
  // put your setup code here, to run once:
  pinMode(blueLed, OUTPUT);
  delay(1000);
  pinMode(RedLed, OUTPUT);
  delay(1000);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j = 0; j<=10; j = j + 1){
    digitalWrite(blueLed,HIGH);
    delay(1000);
    digitalWrite(blueLed,LOW);
    delay(1000);
  }

  for (int k = 0; k<=10; k = k +1){
    digitalWrite(RedLed, HIGH);
    delay(1000);
    digitalWrite(RedLed,LOW);
    delay(1000);

  }


}
