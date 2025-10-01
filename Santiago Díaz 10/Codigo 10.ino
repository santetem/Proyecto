int vector[10]; 
int buz = 3; 

void setup() {
  Serial.begin(9600);
  pinMode(buz, OUTPUT);

  randomSeed(analogRead(A0)); 
  for (int i = 0; i < 10; i++) {
    vector[i] = random(1, 11); 
  }

  Serial.print("Vector: ");
  for (int i = 0; i < 10; i++) {
    int n = vector[i];
    Serial.print(n);
    Serial.print(" ");

    if (n == 5) {
      tone(buz, 1000, 300); 
      delay(300); 
    }
  }
  Serial.println();
  Serial.println("Fin.");
}

void loop() {
}