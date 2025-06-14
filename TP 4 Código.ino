#define TMP A1
#define LDR A0
#define R 11
#define A 10
#define V 9
void setup()
{
  pinMode(LDR, INPUT);
  pinMode(TMP, INPUT);
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(V, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  //LUZ AMBIENTAL
  int luzz = analogRead(LDR);
  int ambiental = map( luzz, 344 , 1017 , 100 , 0 );
  int limitado = constrain(ambiental ,0,100);
  Serial.print( "Nivel de luz actual: " ); 
  Serial.println( ambiental ); 
  //TEMPERATURA
  int temp = analogRead(TMP); 
  float tempFinal = ( (float)temp * 5.0 / 1024) * 100 - 50;
  Serial.print( "Temperatura actual: " );
  Serial.print( tempFinal );
  Serial.println( "C" );
  //TAMPERATURA PARTE DOS
  if (limitado >= 30 && limitado <= 70) 
  {
  	if (tempFinal <= 18)
 	{
    	analogWrite(A, 255);
    	analogWrite(R, 0);
    	analogWrite(V, 0);
  	}
  	else if (tempFinal >= 90)
  	{
    	analogWrite(R, 255);
    	analogWrite(A, 0);
    	analogWrite(V, 0);
  	}
  	else
  	{
    	analogWrite(V, 255);
    	analogWrite(R, 0);
    	analogWrite(A, 0);
  	}
  	}
  	else
  	{
    	analogWrite(R, 0);
    	analogWrite(A, 0);
    	analogWrite(V, 0);
  	}
  	delay(550);
}