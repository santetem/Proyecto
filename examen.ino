#include <Adafruit_NeoPixel.h>
#define trig 7
#define eco 6
#define PIXEL 3
int NUM_PIX = 12;
int boton = 0;

Adafruit_NeoPixel rings = Adafruit_NeoPixel(NUM_PIX,PIXEL,NEO_GRB + NEO_KHZ800);
void setup()
{
   pinMode( PIXEL , OUTPUT);
   pinMode(eco, INPUT);
   pinMode(trig, OUTPUT);
   pinMode(13, INPUT);
  
   rings.begin();
   rings.show();
   rings.clear();
   Serial.begin(9600);
}

void loop()
{
  //boton 
  int cont = digitalRead(13);
  if (cont == LOW){
    boton = boton +1;
    if (boton==2){
      boton = 0;
      
    }
    delay(200);
  }
  //DISTANCIA
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite( trig, HIGH);
  delayMicroseconds(10);
  digitalWrite( trig, LOW);
  
  float tiempo = pulseIn( eco , HIGH );
  float distancia = tiempo / 58.3;
  
  map(distancia, 0 , 333 , 0 , 1000);
  
  Serial.println(distancia);
  delay(300);
  if (boton = 0){
    rings.clear();
  }
  if (boton = 1){
   if (distancia > 0 && distancia <=24)
  {
    rings.clear();
    rings.setPixelColor( 0  , rings.Color (0, 255 ,0));
    rings.setPixelColor( 1  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 2  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 3  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 4  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 5  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 25 && distancia <=49)
  {
    rings.clear();
    rings.setPixelColor( 0  , rings.Color (0, 255 ,0));
    rings.setPixelColor( 1  , rings.Color (0, 100 ,0));
  	rings.setPixelColor( 2  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 3  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 4  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 5  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 50 && distancia <=74)
  {
    rings.clear(); 
    rings.setPixelColor( 0  , rings.Color (0, 255 ,0));
    rings.setPixelColor( 1  , rings.Color (0, 100 ,0));
  	rings.setPixelColor( 2  , rings.Color (20, 70 ,0));
  	rings.setPixelColor( 3  , rings.Color (50, 100 ,0));
    rings.setPixelColor( 4  , rings.Color (0, 255 ,0));
    rings.setPixelColor( 5  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 75 && distancia <=99)
  {
    rings.clear(); 
    rings.setPixelColor( 0  , rings.Color (0, 255 ,0));
    rings.setPixelColor( 1  , rings.Color (0, 100 ,0));
  	rings.setPixelColor( 2  , rings.Color (20, 70 ,0));
  	rings.setPixelColor( 3  , rings.Color (50, 100 ,0));
  	rings.setPixelColor( 4  , rings.Color (100, 100 ,0));
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 100 && distancia <=124)
  {
    rings.clear(); 
    
    rings.setPixelColor( 1  , rings.Color (0, 100 ,0));
  	rings.setPixelColor( 2  , rings.Color (20, 70 ,0));
  	rings.setPixelColor( 3  , rings.Color (50, 100 ,0));
  	rings.setPixelColor( 4  , rings.Color (100, 100 ,0));
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 125 && distancia <=149)
  {
    rings.clear(); 
    
  	rings.setPixelColor( 2  , rings.Color (20, 70 ,0));
  	rings.setPixelColor( 3  , rings.Color (50, 100 ,0));
  	rings.setPixelColor( 4  , rings.Color (100, 100 ,0));
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 150 && distancia <=174)
  {
    rings.clear(); 
    
  	rings.setPixelColor( 3  , rings.Color (50, 100 ,0));
  	rings.setPixelColor( 4  , rings.Color (100, 100 ,0));
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 10  , rings.Color (0, 255 ,0));
  	rings.setPixelColor( 11  , rings.Color (0, 255 ,0));
  	rings.show();
  } 
  if (distancia > 175 && distancia <=199)
  {
    rings.clear(); 
    
  	rings.setPixelColor( 4  , rings.Color (100, 100 ,0));
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (100, 0 ,0));
  	rings.setPixelColor( 10  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 11  , rings.Color (200, 100 ,0));
  	rings.show();
  }
  if (distancia > 200 && distancia <=224)
  {
    rings.clear(); 
    
  	
  	rings.setPixelColor( 5  , rings.Color (255, 255 ,0));
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (100, 0 ,0));
  	rings.setPixelColor( 10  , rings.Color (170, 0 ,0));
  	rings.setPixelColor( 11  , rings.Color (200, 100 ,0));
  	rings.show();
  }
  if (distancia > 225 && distancia <=249)
  {
    rings.clear(); 
    
  	
  	rings.setPixelColor( 6  , rings.Color (100, 170 ,0));
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (100, 0 ,0));
  	rings.setPixelColor( 10  , rings.Color (170, 0 ,0));
  	rings.setPixelColor( 11  , rings.Color (255, 0 ,0));
  	rings.show();
  }
  if (distancia > 250 && distancia <=274)
  {
    rings.clear(); 
    
  	
  	rings.setPixelColor( 7  , rings.Color (200, 200 ,0));
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (100, 0 ,0));
  	rings.setPixelColor( 10  , rings.Color (170, 0 ,0));
  	rings.setPixelColor( 11  , rings.Color (255, 0 ,0));
  	rings.show();
  }
  if (distancia > 275 && distancia <=300)
  {
    rings.clear(); 
    
  	
  	rings.setPixelColor( 8  , rings.Color (200, 100 ,0));
  	rings.setPixelColor( 9  , rings.Color (100, 0 ,0));
  	rings.setPixelColor( 10  , rings.Color (170, 0 ,0));
  	rings.setPixelColor( 11  , rings.Color (255, 0 ,0));
  	rings.show();
  }
  }
}
