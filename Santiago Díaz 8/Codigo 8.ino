int led = 3;
int boton = A0;
int vector[5];
int i = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (i < 5) {
    digitalWrite(led, HIGH);     
    delay(1000);                  
    vector[i] = digitalRead(boton) == LOW ? 1 : 0;
    digitalWrite(led, LOW);
    delay(500);
    i++;
  } else {
    Serial.print("Vector: ");
    for (int j = 0; j < 5; j++) {
      Serial.print(vector[j]);
      Serial.print(" ");
      vector[j] = 0;              
    }
    Serial.println();
    i = 0;
    delay(2000);
  }
}
