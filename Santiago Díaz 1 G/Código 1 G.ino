const int boton = 5;
const int verde = 2;
const int azul = 3;
const int rojo = 4;
int cont = 0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(boton) == LOW) {
    cont = cont + 1;
    if (cont >= 4) {
      cont = 0;
    }
    delay(200);
  }

  if (cont == 0) {
    digitalWrite(rojo, HIGH);
    digitalWrite(azul, HIGH);
    digitalWrite(verde, HIGH);
  }

  if (cont == 1) {
    digitalWrite(rojo, HIGH);
    digitalWrite(azul, LOW);
    digitalWrite(verde, LOW);
  }

  if (cont == 2) {
    digitalWrite(rojo, LOW);
    digitalWrite(azul, HIGH);
    digitalWrite(verde, LOW);
  }
  

  if (cont == 3) {
    digitalWrite(rojo, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verde, HIGH);
  }
}
