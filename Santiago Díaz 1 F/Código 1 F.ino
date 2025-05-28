#define boton 7
#define alarma 5
void setup()
{
  pinMode(boton , INPUT_PULLUP);
  pinMode(alarma , OUTPUT);
}

void loop()
{
  if(digitalRead(boton) == LOW){
    
    digitalWrite(alarma , HIGH);
    delay(2000);
    digitalWrite(alarma , LOW);
    delay(1000);
    digitalWrite(alarma , HIGH);
    delay(1000);
    digitalWrite(alarma , LOW);
    delay(1000);
    digitalWrite(alarma , HIGH);
    delay(1000);
    digitalWrite(alarma , LOW);
    delay(1000);
  }
  else{
    digitalWrite(alarma , LOW);
  }
}