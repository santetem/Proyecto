#define pir 2
#define TMP A0
#define RELE 3
#define NMOS 5

void setup()
{
  pinMode(TMP, INPUT);
  pinMode(pir, INPUT);
  pinMode(NMOS, OUTPUT);
  pinMode(RELE, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int tempe = analogRead(TMP);
  float temp = ( (float)tempe * 5.0 / 1024) * 100 - 50;
  
  bool mov = digitalRead(pir);
  Serial.println(temp);
  
  if (mov == HIGH){
  if (temp < 15){
    analogWrite(NMOS, 50);
  }
  if (temp >= 15 && temp < 20){
    analogWrite(NMOS, 100);
  }
  if (temp >= 20 && temp < 30) {
    analogWrite(NMOS, 150);
  }
  if (temp >= 30){
    analogWrite(NMOS, 255 );
  }
  }
  if (temp >= 50){
    analogWrite(RELE, 255);
  }
}