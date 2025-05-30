#define papu1 13
#define papu2 12
#define papu3 11
#define papu4 10
int boton = 7;
#define buz 3
void setup()
{
  pinMode(papu1 , OUTPUT);
  pinMode(papu2 , OUTPUT);
  pinMode(papu3 , OUTPUT);
  pinMode(papu4 , OUTPUT);
}

void loop()
{
 	digitalWrite(papu1 , HIGH);
    digitalWrite(papu2 , LOW);
    digitalWrite(papu3 , HIGH);
    digitalWrite(papu4 , LOW);
    tone(buz , 500);
    delay(500);

    digitalWrite(papu1 , LOW);
    digitalWrite(papu2 , HIGH);
 	digitalWrite(papu3 , LOW);
    digitalWrite(papu4 , HIGH);
  	tone(buz , 300);
    delay(500);
    
  
  
}
  