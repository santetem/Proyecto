int pot;
long tiempo = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(5 , OUTPUT);
}

void loop()
{
  pot = analogRead(A0);
  tiempo = ((long)pot * 10000)/1023;
  Serial.println(tiempo);
  analogWrite ( 5 , 255);
    delay(tiempo);
  analogWrite (5 , 0);
    delay(tiempo);
  
  
}