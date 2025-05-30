int pot;
#define buzz 6
int sonido = 0;
void setup()
{
 Serial.begin(9600);
 pinMode (buzz , OUTPUT);
}

void loop()
{
  pot = analogRead(A0);
  sonido = ((long)pot * 1900)/1023;
  tone(buzz , sonido);
  
}