int redLed = 12;
int greenLed = 10;
int blueLed = 11;
int brightness = 150;
String readValue;


void setup(){
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);

}
void loop(){
  Serial.println("What colour you want = (red,gree,blue) ");
  while (Serial.available()==0) {}
  readValue = Serial.readString();
  Serial.println("the value entered is = ");
  Serial.println(readValue);
  
  if (readValue == "red"){
  analogWrite(redLed,brightness);
  analogWrite(greenLed,0);
  analogWrite(blueLed,0);
  
  }
  
  if (readValue == "green"){
  analogWrite(redLed,0);
  analogWrite(greenLed,brightness);
  analogWrite(blueLed,0);
  
  }
  
  if (readValue == "blue"){
  
  analogWrite(redLed,0);
  analogWrite(greenLed,0);
  analogWrite(blueLed,brightness);
  
  }
  
  if (readValue != "red" && readValue != "green" && readValue != "blue"){
  Serial.println("Enter valid color: ");
  }

}