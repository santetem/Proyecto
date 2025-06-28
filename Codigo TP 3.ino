#include <LiquidCrystal.h>
#define PIR 2
#define TMP A0
#define LDR A1
#define trig 7
#define eco 6
#define rojo 13
#define verde 12
#define buz 11
LiquidCrystal LCD(10, 9, 8, 5, 4, 3);
void setup()
{
  pinMode(PIR, INPUT);
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT);
  pinMode(eco, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buz, OUTPUT);
  Serial.begin(9600);
  LCD.begin( 16 , 2);
}

void loop()
{
  
  //distancia
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite( trig, HIGH);
  delayMicroseconds(10);
  digitalWrite( trig, LOW);
  
  float tiempo = pulseIn( eco , HIGH );
  float distancia = tiempo / 58.3;
  
  
  
  if (distancia > 0 && distancia <=99)
  {
    digitalWrite(rojo , HIGH);
    digitalWrite(verde, LOW);
    tone(buz , 833);
    delay(200);
    tone(buz , 600);
    delay(100);
  } 
  else{
    digitalWrite(rojo , LOW);
    noTone(buz);
  }
  
  //luz
  int luzz = analogRead(LDR);
  int ambiental = map( luzz, 1 , 310 , 0 , 100 );
  int limitado = constrain(ambiental ,0,100);
  
  //temperatura
  int temp = analogRead(TMP);
  float tempFinal = ( (float)temp * 5.0 / 1024) * 100 - 50;
  if (tempFinal >= 39)
   {
    digitalWrite(rojo , HIGH);
    digitalWrite(verde, LOW);
    tone(buz , 833);
    delay(200);
    tone(buz , 600);
    delay(100);
    }
  
  //movimiento
  bool mov = digitalRead(PIR);
  
  //parte LCD
  LCD.clear();
  LCD.setCursor(0 , 0);
  LCD.print("D:");
  LCD.print(distancia);
  LCD.print("cm ");
  LCD.print("L:");
  LCD.print(limitado);
  LCD.print("%");
  LCD.setCursor(0 , 1);
  LCD.print("T:");
  LCD.print(tempFinal);
  LCD.print("C");
  LCD.print(" MOV:");
  if (mov == true) 
  {
    LCD.print("SI");
  } else
  {
    LCD.print("NO");
  }
  delay(100);
  
  //if warrior
  if (limitado <= 20)
  {
  if (mov == HIGH)
  {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, HIGH);
    tone(buz, 900);
    delay(300);
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    noTone(buz);
    delay(200);
  }
  else
  {
    
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    analogWrite(buz, 0);
  }
  Serial.println("-------------------------------------------------------------");
  Serial.println("                  Modo Nocturno: Activado");
  Serial.println("-------------------------------------------------------------");
  Serial.print("Distancia persona: ");
  Serial.print(distancia);
  Serial.print("cm");
  Serial.print( "        Temperatura actual: " );
  Serial.print( tempFinal );
  Serial.println( "C" );
  Serial.print( "Movimiento: " );
  if (mov == true) 
  {
    Serial.print("Detectado");
  } else
  {
    Serial.print("No detectado");
  }
  Serial.print( "        Nivel de luz actual: " );
  Serial.println( limitado );
  delay(400);
  
  }
  else
  {
    Serial.println("-------------------------------------------------------------");
    Serial.println("                  Modo Nocturno: Desactivado");
    Serial.println("-------------------------------------------------------------");
    Serial.print("Distancia persona: ");
    Serial.print(distancia);
    Serial.print("cm");
    Serial.print( "        Temperatura actual: " );
    Serial.print( tempFinal );
    Serial.println( "C" );
    delay(400);
    
  }
  
  
}