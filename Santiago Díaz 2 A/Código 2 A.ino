#define papu 6
void setup()
{
  pinMode (papu , OUTPUT);
}
  
void loop()
{
  analogWrite (papu , 0);
  delay(300);
  analogWrite (papu , 51);
  delay(300);
  analogWrite (papu , 102);
  delay(300);
  analogWrite (papu , 153);
  delay(300);
  analogWrite (papu , 204);
  delay(300);
  analogWrite (papu , 255);
  delay(300);
  analogWrite (papu , 204);
  delay(300);
  analogWrite (papu , 153);
  delay(300);
  analogWrite (papu , 102);
  delay(300);
  analogWrite (papu , 51);
  delay(300);
}