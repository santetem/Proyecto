#define luzroja 2
#define luzverde 3
#define piripipo 4

void setup()
{
  pinMode(luzroja , OUTPUT);
  pinMode(luzverde , OUTPUT);
  pinMode(piripipo , OUTPUT);
}

void loop()
{
  digitalWrite(luzroja , HIGH);
  digitalWrite(piripipo , HIGH);
  digitalWrite(luzverde , LOW);
  delay(4000);
  
  digitalWrite(luzroja , LOW);
  digitalWrite(piripipo , LOW);
  digitalWrite(luzverde , HIGH);
  delay(4000);
}