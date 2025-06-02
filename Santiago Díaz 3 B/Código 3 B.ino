#define rojo 11
#define azul 10
#define verde 9
int valor;
int pot;
bool boton = false;
int potrojo = 0;
int potazul = 0;
int potverde = 0;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(13, INPUT_PULLUP);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(13) == LOW)
  {
    boton = !boton;
    delay(200);
  }

  if (boton == true)
  {
    pot = analogRead(A0);
    delay(100);
    Serial.println(pot);

    if (pot >= 0 && pot <= 341)
    {
      potrojo = map(pot, 0, 341, 1, 250);
      potazul = 0;
      potverde = 0;
    }
    else if (pot >= 342 && pot <= 684)
    {
      potazul = map(pot, 342, 684, 1, 250);
      potrojo = 0;
      potverde = 0;
    }
    else if (pot >= 685 && pot <= 1023)
    {
      potverde = map(pot, 685, 1023, 1, 250);
      potrojo = 0;
      potazul = 0;
    }

    analogWrite(rojo, potrojo);
    analogWrite(azul, potazul);
    analogWrite(verde, potverde);
  }
  else
  {
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }
}