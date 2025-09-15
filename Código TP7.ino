#include <Adafruit_NeoPixel.h>

#define PIN_LEDS 6
#define TOTAL_LEDS 24
#define PIN_BOTON 3
#define PIN_PITO 4

Adafruit_NeoPixel ledsita(TOTAL_LEDS, PIN_LEDS, NEO_GRB + NEO_KHZ800);

int paso = HIGH;

int formita[6][6][4] = {
  //dado1
  {{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,1,0}},
  //dado2
  {{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1},{1,0,0,0},{1,1,1,1}},
  //dado3
  {{1,1,1,1},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1}},
  //dado4
  {{1,0,0,1},{1,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}},
  //dado5
  {{1,1,1,1},{1,0,0,0},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,1,1,1}},
  //dado6
  {{1,1,1,1},{1,0,0,0},{1,0,0,0},{1,1,1,1},{1,0,0,1},{1,1,1,1}}
};

void setup() {
  ledsita.begin();
  ledsita.show();
  pinMode(PIN_BOTON, INPUT_PULLUP);
  pinMode(PIN_PITO, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {
  int ahora = digitalRead(PIN_BOTON);

  if (paso == HIGH && ahora == LOW) {
    int num1 = random(1,7);
    int num2 = random(1,7);

    //dado1 print
    ledsita.clear();
    for (int f=0; f<6; f++) {
      for (int c=0; c<4; c++) {
        int pos = f + c*6;
        if (formita[num1-1][f][c]==1)
          ledsita.setPixelColor(pos, ledsita.Color(0,150,0));
      }
    }
    ledsita.show();
    delay(500);

    //dado2 print
    ledsita.clear();
    for (int f=0; f<6; f++) {
      for (int c=0; c<4; c++) {
        int pos = f + c*6;
        if (formita[num2-1][f][c]==1)
          ledsita.setPixelColor(pos, ledsita.Color(0,150,0));
      }
    }
    ledsita.show();
    delay(500);

    //suma
    int sumita = num1+num2;
    Serial.print("Dado1: "); Serial.print(num1);
    Serial.print(" Dado2: "); Serial.print(num2);
    Serial.print(" Suma: "); Serial.println(sumita);

    //caso7
    if (sumita == 7) {
      for (int k=0; k<5; k++) {
        ledsita.fill(ledsita.Color(255,0,0));
        ledsita.show();
        tone(PIN_PITO,1000,200);
        delay(200);
        ledsita.clear();
        ledsita.show();
        delay(200);
      }
    }
  }

  paso = ahora;
}