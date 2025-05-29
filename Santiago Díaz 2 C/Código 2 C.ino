#define rojo 11
#define azul 10
#define verde 9
void setup()
{
  pinMode (rojo , OUTPUT);
  pinMode (verde , OUTPUT);
  pinMode (azul , OUTPUT);
}
void loop()
{
  analogWrite (verde , 0);
  analogWrite (rojo , 60);
  delay(800);
  analogWrite (rojo , 150);
  delay(800);
  analogWrite (rojo , 255);
  delay(800);
  analogWrite (rojo , 0);
  analogWrite (azul , 60);
  analogWrite (verde , 60);
  delay(800);
  analogWrite (azul , 150);
  analogWrite (verde , 150);
  delay(800);
  analogWrite (azul , 250);
  analogWrite (verde , 250);
  delay(800);
  analogWrite (azul , 0);
  analogWrite (rojo , 60);
  analogWrite (verde , 60);
  delay(800);
  analogWrite (rojo , 150);
  analogWrite (verde , 150);
  delay(800);
  analogWrite (rojo , 250);
  analogWrite (verde , 250);
  delay(800);
}
  