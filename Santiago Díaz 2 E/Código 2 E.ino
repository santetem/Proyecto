int pot1;
int pot2;
int pot3;
int valor1;
int valor2;
int valor3;
int rojo = 6;
int azul = 5;
int verde = 3;
void setup()
{
  Serial.begin(9600);
  pinMode(rojo , OUTPUT);
  pinMode(verde , OUTPUT);
  pinMode(azul , OUTPUT);

  
}

void loop()
{
  
  pot1 = analogRead(A0);
  valor1 = ((pot1)*255)/1023;
  
  pot2 = analogRead(A1);
  valor2 = ((pot2)*255)/1023;
  
  pot3 = analogRead(A2);
  valor3 = ((pot3)*255)/1023;
  
  analogWrite (rojo , valor1);
  analogWrite (verde , valor2);
  analogWrite (azul , valor3);
  Serial.print(valor1);
}