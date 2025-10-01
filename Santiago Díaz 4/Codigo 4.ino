#define led 3

const int arreglo[8] = {1, 0, 0, 1, 1, 0, 1, 1};

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
 
  for (int i = 0; i < 8; i++) {
    int secuencia = arreglo[i];

    digitalWrite(led, secuencia * 255); 
    

    delay(1000); 
  }
}