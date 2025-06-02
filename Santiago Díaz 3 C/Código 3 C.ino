#define rojo 13
#define amarillo 11
#define amarillo1 10
#define cian 8
#define cian1 7
#define azul 12
#define violeta 4
#define violeta1 6
#define blanco 9
#define blanco1 5
#define blanco2 3
bool bot = false;
int pot;
int tiempo;

void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo1, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(cian, OUTPUT);
  pinMode(cian1, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(violeta, OUTPUT);
  pinMode(violeta1, OUTPUT);
  pinMode(blanco, OUTPUT);
  pinMode(blanco1, OUTPUT);
  pinMode(blanco2, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
void loop()
{
  pot = analogRead(A0);
  tiempo = map(pot, 0, 1023, 1, 5000);
  	Serial.println(tiempo)/1000;
    delay(200);
  if(digitalRead(2) == LOW)

  {
    bot = !bot;
    delay(0);
  }
  if(bot == true)
  {
  
  	analogWrite(rojo, 255);
 	delay(tiempo);
    
 	analogWrite(rojo, 0);
  
  	analogWrite(amarillo1, 255);
  	analogWrite(amarillo, 255);
  	delay(tiempo);
    
  	analogWrite(amarillo1, 0);
  	analogWrite(amarillo, 0);
  
  	analogWrite(cian, 255);
  	analogWrite(cian1, 255);
  	delay(tiempo);
  	
    analogWrite(cian, 0);
  	analogWrite(cian1, 0);
  
  	analogWrite(azul, 255);
  	delay(tiempo);
    
  	analogWrite(azul, 0);
  
  	analogWrite(violeta, 255);
  	analogWrite(violeta1, 255);
  	delay(tiempo);
    
  	analogWrite(violeta, 0);
  	analogWrite(violeta1, 0);
    
  	analogWrite(blanco, 255);
  	analogWrite(blanco1, 255);
  	analogWrite(blanco2, 255);
  	delay(tiempo);
    
  	analogWrite(blanco, 0);
  	analogWrite(blanco1, 0);
  	analogWrite(blanco2, 0);
  }
  else
  {
    digitalWrite(rojo, LOW);
  	digitalWrite(amarillo1, LOW);
  	digitalWrite(amarillo, LOW);
  	digitalWrite(cian, LOW);
 	digitalWrite(cian1, LOW);
  	digitalWrite(azul, LOW);
  	digitalWrite(violeta, LOW);
  	digitalWrite(violeta1, LOW);
 	digitalWrite(blanco, LOW);
  	digitalWrite(blanco1, LOW);
  	digitalWrite(blanco2, LOW);
  }

}