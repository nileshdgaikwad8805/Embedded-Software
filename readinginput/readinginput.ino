int readValueInt;
float readValueFloat;
String readValueString;


void setup(){
  Serial.begin(9600);
  
 

}

void loop(){
  Serial.println("Please enter a number");
  while (Serial.available()==0){}
  readValueInt = Serial.parseInt();
  Serial.print("you entered : ");
  Serial.println(readValueInt);
  
  Serial.println("Please enter a float number");
  while (Serial.available()==0){}
  readValueFloat = Serial.parseFloat();
  Serial.print("you entered : ");
  Serial.println(readValueFloat);
  
  Serial.println("Please enter a string");
  while (Serial.available()==0){}
  readValueString = Serial.readString();
  Serial.print("you entered : ");
  Serial.println(readValueString);
}