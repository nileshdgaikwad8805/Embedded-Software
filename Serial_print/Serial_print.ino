int Led = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(Led,OUTPUT);

  Serial.println("Welcome to my program");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Led,HIGH);
  Serial.println("Light is on");
  delay(1000);
  digitalWrite(Led,LOW);
  Serial.println("Light is off");
  delay(1000);

}
