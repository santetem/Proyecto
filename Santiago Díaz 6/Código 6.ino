int datos[4] = {2, 6, 10, 11};

void setup (){
  Serial.begin(9600);
}
void loop (){
  for (int i = 0; i < 4; i++){
    int numero = datos[i];
    Serial.print("Multiplos del numero: ");
    Serial.println(numero);
    
    for (int j = 1; j <= 5; j++){
     int multiplo = numero * j;
     Serial.println(multiplo);
    }
  }
  while(true);
}