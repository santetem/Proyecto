#define papu1 13
#define papu2 11
#define papu3 10
#define papu4 9
#define papu5 6
#define papu6 5
#define papu7 3
#define papu8 2

void setup()
{
  pinMode (papu1 , OUTPUT);
  pinMode (papu2 , OUTPUT);
  pinMode (papu3 , OUTPUT);
  pinMode (papu4 , OUTPUT);
  pinMode (papu5 , OUTPUT);
}
void loop()
{
  analogWrite (papu2 , 0);
  analogWrite (papu1 , 0);
  delay(300);
  analogWrite (papu1 , 0);
  analogWrite (papu2 , 31);
  delay(300);
  analogWrite (papu2 , 0);
  analogWrite (papu3 , 63);
  delay(300);
  analogWrite (papu3 , 0);
  analogWrite (papu4 , 95);
  delay(300);
  analogWrite (papu4 , 0);
  analogWrite (papu5 , 127);
  delay(300);
  analogWrite (papu5 , 0);
  analogWrite (papu6 , 159);
  delay(300);
  analogWrite (papu6 , 0);
  analogWrite (papu7 , 190);
  delay(300);
  analogWrite (papu7 , 0);
  analogWrite (papu8 , 255);
  delay(300);
  analogWrite (papu7 , 190);
  analogWrite (papu8 , 0);
  delay(300);
  analogWrite (papu6 , 159);
  analogWrite (papu7 , 0);
  delay(300);
  analogWrite (papu5 , 127);
  analogWrite (papu6 , 0);
  delay(300);
  analogWrite (papu4 , 95);
  analogWrite (papu5 , 0);
  delay(300);
  analogWrite (papu3 , 63);
  analogWrite (papu4 , 0);
  delay(300);
  analogWrite (papu2 , 31);
  analogWrite (papu3 , 0);
  delay(300);
}