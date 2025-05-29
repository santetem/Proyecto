int pot;
int valor;
int rojo1 = 11;
int rojo2 = 9;
int azul = 10;
int verde = 6;
void setup()
{
  Serial.begin(9600);
  pinMode(rojo1 , OUTPUT);
  pinMode(rojo2 , OUTPUT);
  pinMode(azul , OUTPUT);
  pinMode(verde , OUTPUT);
  
}

void loop()
{
  
  pot = analogRead(A0);
  Serial.println(pot);
  valor = ((long) pot * 255) / 1023;
  Serial.println (valor);
  analogWrite (rojo1 , 255);
  analogWrite (azul , 255);
  analogWrite (rojo2 , 255);
  analogWrite (verde , 255);
  delay(pot);
  analogWrite (rojo1 , 0);
  analogWrite (azul , 0);
  analogWrite (rojo2 ,0);
  analogWrite (verde , 0);
  delay(pot);
  
}