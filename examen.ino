#include <Adafruit_NeoPixel.h>
#define PIXEL 3
#define pote A0
#define contador 5
int NUM_PIX = 12;
int boton = 1;
Adafruit_NeoPixel rings = Adafruit_NeoPixel(NUM_PIX,PIXEL,NEO_GRB + NEO_KHZ800);


void setup()
{
  pinMode( PIXEL , OUTPUT);
  pinMode( contador , INPUT_PULLUP);
 
  rings.begin();
  rings.show();
  rings.clear();
  Serial.begin(9600);
}
 
void loop()
{
  randomSeed(analogRead(A0));
  int pot;
  int tiempo;
  pot = analogRead(A0);
  tiempo = map(pot, 1023, 0, 100, 1000);
  if (digitalRead(contador) == LOW)
  {
    boton = boton + 1;
    if (boton == 4)
    {
      boton = 1;
    }
  }
 
 if (boton == 1)
  {
  rings.setPixelColor( 0  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 1  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 2  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo),
  rings.clear();
  rings.setPixelColor( 3  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 4  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 5  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 6  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 8  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 9  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 11  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  }
  //INVERTIDO
 if (boton == 2)
  {
  rings.clear();
  rings.setPixelColor( 0  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 10  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 9  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 7  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 6  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 5  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 4  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 3  , rings.Color (255, 0 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 2  , rings.Color (0, 255 ,0));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor( 1  , rings.Color (0, 0 ,255));
  rings.show();
  delay(tiempo);
  rings.clear();
  }
  
  //RANDOM
  if (boton == 3)
  {
  rings.setPixelColor(1, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(3, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(5, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(7, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(9, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(11, random(0, 255), random(0, 255), random(0, 255));
  rings.show();
  delay(tiempo);
  rings.clear();
  rings.setPixelColor(0, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(2, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(4, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(6, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(8, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(10, random(0, 255), random(0, 255), random(0, 255));
  rings.setPixelColor(12, random(0, 255), random(0, 255), random(0, 255));
  rings.show();
  delay(tiempo);
  rings.clear();
  delay(tiempo);
  }
  Serial.println(boton);
  delay(3);
}