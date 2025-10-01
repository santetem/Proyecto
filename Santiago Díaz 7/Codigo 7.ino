const int led[] = {13, 12, 11, 10, 9};

#define leds 5 

void setup() {
  for (int i = 0; i < leds; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < leds; i++) {
    
    digitalWrite(led[i], HIGH); 
    delay(300);       
    digitalWrite(led[i], LOW); 
  }

  for (int i = leds - 1; i >= 0; i--) {
    
    digitalWrite(led[i], HIGH);
    delay(300);
    digitalWrite(led[i], LOW);
  }
}