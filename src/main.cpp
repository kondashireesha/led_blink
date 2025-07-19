#include <Arduino.h>

#define Led_pin 2
int  number=0;
bool iseven=false;
void setup()
{
  Serial.begin(115200);
  pinMode(Led_pin,OUTPUT);
  Serial.println("enter the number for led ON :");

}
void loop()
{
  if (Serial.available()>0)
  {
    number=Serial.parseInt();
    Serial.print("you entered:");
    Serial.println(number);
    if(number%2==0)
    {
      iseven=true;
      Serial.println("Even number detected.LED will ON:");
  }
  else{
    iseven=false;
      Serial.println("Even number detected.LED will ON:");
      digitalWrite(Led_pin,LOW);
      delay(500);
  }
  if(iseven)
  {
    digitalWrite(Led_pin,HIGH);
  }
  }
}
