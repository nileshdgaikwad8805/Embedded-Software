int Led = 5;

void setup(){
  pinMode(Led,OUTPUT);


}
void loop(){
  analogWrite(Led,255);
  delay(1000);
  analogWrite(Led,0);
  delay(1000);
}