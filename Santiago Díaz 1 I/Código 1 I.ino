#define papu1 2
#define papu2 3
#define papu3 4
#define papu4 5
#define papu5 6
#define papu6 7
#define papu7 8
#define papu8 9
#define papu9 10
#define papu10 11
int boton = 12;

void setup()
{
  pinMode(papu1 , OUTPUT);
  pinMode(papu2 , OUTPUT);
  pinMode(papu3 , OUTPUT);
  pinMode(papu4 , OUTPUT);
  pinMode(papu5 , OUTPUT);
  pinMode(papu6 , OUTPUT);
  pinMode(papu7 , OUTPUT);
  pinMode(papu8 , OUTPUT);
  pinMode(papu9 , OUTPUT);
  pinMode(papu10 , OUTPUT);
  pinMode(boton , INPUT_PULLUP);
}
void loop()
{
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu1 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu2 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu3 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu4 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu5 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu6 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu7 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu8 , HIGH);
  	delay(100);
  if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu9 , HIGH);
  	delay(100);
   if (digitalRead(boton)==HIGH)
  {
 	digitalWrite(papu10 , HIGH);
  	delay(100);
     digitalWrite (papu1 , LOW);
     digitalWrite (papu2 , LOW);
     digitalWrite (papu3 , LOW);
     digitalWrite (papu4 , LOW);
     digitalWrite (papu5 , LOW);
     digitalWrite (papu6 , LOW);
     digitalWrite (papu7 , LOW);
     digitalWrite (papu8 , LOW);
     digitalWrite (papu9 , LOW);
     digitalWrite (papu10 , LOW);
   }
  }
  }
  }
  }
  }
  }
  }
  }
  }
}