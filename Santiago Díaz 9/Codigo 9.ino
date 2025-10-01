int rojo = 11;
int verde = 10;
int azul = 9;

int l1[3] = {122, 234, 21};   
int l2[3] = {33, 53, 155};   
int l3[3] = {200, 255, 12};   

int* secuen[3] = {l1, l2, l3};

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    
    analogWrite(rojo, secuen[i][0]);
    analogWrite(verde, secuen[i][1]); 
    analogWrite(azul, secuen[i][2]);
    
    delay(1000); 
  }
}