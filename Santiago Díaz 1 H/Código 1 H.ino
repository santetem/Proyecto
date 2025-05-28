int rojo = 4;
int azul = 5;
int verde = 6;
int boton = 2;
int cont = 0;

void setup(){
  pinMode (rojo , OUTPUT);
  pinMode (verde , OUTPUT);
  pinMode (azul , OUTPUT);
  pinMode (boton , INPUT_PULLUP);
}
void loop()
{
  if(digitalRead(boton) == LOW)
  {
    cont = cont + 1;
    if (cont >= 7)
    {
      cont = 0;
    }
    delay(200);
  }
  if (cont == 0)
  {
    digitalWrite (rojo , HIGH);
    digitalWrite (azul , LOW);
    digitalWrite (verde , LOW);
  }
   if (cont == 1)
  {
    digitalWrite (rojo , LOW);
    digitalWrite (azul , HIGH);
    digitalWrite (verde , HIGH);
  }
   if (cont == 2)
  {
    digitalWrite (rojo ,LOW);
    digitalWrite (azul , LOW);
    digitalWrite (verde , HIGH);
  }
   if (cont == 3)
  {
    digitalWrite (rojo , HIGH);
    digitalWrite (azul , HIGH);
    digitalWrite (verde , LOW);
  }
   if (cont == 4)
  {
    digitalWrite (rojo , LOW);
    digitalWrite (azul , HIGH);
    digitalWrite (verde , LOW);
  }
   if (cont == 5)
  {
    digitalWrite (rojo , HIGH);
    digitalWrite (azul , HIGH);
    digitalWrite (verde , HIGH);
  }
   if (cont == 6)
  {
    digitalWrite (rojo , HIGH);
    digitalWrite (azul , LOW);
    digitalWrite (verde , HIGH);
  }
}