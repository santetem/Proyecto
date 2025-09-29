#define buz 3
#define tempo 110
#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440
#define B4 494
#define C5 523

int melody[] = {
  C4, D4, E4, F4, G4, A4, B4, C5,
  C5, B4, A4, G4, F4, E4, D4, C4,
  G4, G4, A4, A4, G4, G4, F4, E4,
  D4, D4, C4, C4, G4, F4, E4, C4,
};

int figures[] = {
  8, 8, 8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 4,
  8, 8, 8, 8, 4, 8, 8, 4
};

void setup(){
  pinMode(buz, OUTPUT);
}

void loop() {
  int duracionRedonda = (60000 * 4) / tempo;
  int length = sizeof(melody) / sizeof(melody[0]); 
  for (int i = 0; i < length; i++) {
    int duration = duracionRedonda / abs(figures[i]);
    if (melody[i] > 0) {
      tone(buz, melody[i], duration);
      delay(duration);
      noTone(buz);
    } else {
      delay(duration);
    }
  }
  delay(2000);
}