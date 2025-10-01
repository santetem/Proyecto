#define led 6
#define led1 5

int arreglo1[8] = {1, 0, 0, 1, 1, 0, 1, 1};

int arreglo2[8] = {0, 1, 0, 1, 0, 0, 1, 0};

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
}


void loop() {
 
  for (int i = 0; i < 8; i++) {
    int secuencia1 = arreglo1[i];
    int secuencia2 = arreglo2[i];

    digitalWrite(led, secuencia1 * 255); 
    digitalWrite(led1, secuencia2 * 255);
    

    delay(1000); 
  }
}