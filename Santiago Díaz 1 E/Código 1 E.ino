#define rojo1 2
#define azul1 3
#define verde1 4
#define rojo2 5
#define azul2 6
#define verde2 7

void setup()
{
  pinMode (rojo1 , OUTPUT);
  pinMode (verde1 , OUTPUT);
  pinMode (azul1 , OUTPUT);
  pinMode (rojo2 , OUTPUT);
  pinMode (verde2 , OUTPUT);
  pinMode (azul2 , OUTPUT);
}

void loop()
{
  digitalWrite (rojo1 , HIGH);
  digitalWrite (rojo2 , LOW);
  digitalWrite (verde2 , LOW);
  delay(500);
  
  digitalWrite (rojo1 , LOW);
  digitalWrite (azul2 , HIGH);
  digitalWrite (verde2 , HIGH);
  delay(500);
  
  digitalWrite (azul2 , LOW);
  digitalWrite (verde2 , LOW);
  digitalWrite (verde1 , HIGH);
  delay(500);
  
  digitalWrite (verde1 , LOW);
  digitalWrite (rojo2 , HIGH);
  digitalWrite (azul2 , HIGH);
  delay(500);
  
  digitalWrite (rojo2 , LOW);
  digitalWrite (azul2 , LOW);
  digitalWrite (azul1 , HIGH);
  delay(500);
  
  digitalWrite (azul1 , LOW);
  digitalWrite (rojo2 , HIGH);
  digitalWrite (azul2 , HIGH);
  digitalWrite (verde2 , HIGH);
  delay(500);

  digitalWrite (rojo2 , LOW);
  digitalWrite (azul2 , LOW);
  digitalWrite (verde2 , LOW);
  digitalWrite (rojo1 , HIGH);
  digitalWrite (verde1 , HIGH);
  delay(500);
  
  digitalWrite (rojo1 , LOW);
  digitalWrite (verde1 , LOW);
  digitalWrite (rojo2 , HIGH);
  delay(500);
  
  digitalWrite (rojo2 , LOW);
  digitalWrite (azul1 , HIGH);
  digitalWrite (verde1 , HIGH);
  delay(500);
  
  digitalWrite (azul1 , LOW);
  digitalWrite (verde1 , LOW);
  digitalWrite (verde2 , HIGH);
  delay(500);
  
  digitalWrite (verde2 , LOW);
  digitalWrite (rojo1 , HIGH);
  digitalWrite (azul1 , HIGH);
  delay(500);
  
  digitalWrite (rojo1 , LOW);
  digitalWrite (azul1 , LOW);
  digitalWrite (azul2 , HIGH);
  delay(500);
  
  digitalWrite (azul2 , LOW);
  digitalWrite (rojo1 , HIGH);
  digitalWrite (azul1 , HIGH);
  digitalWrite (verde1 , HIGH);
  delay(500);

  digitalWrite (rojo1 , LOW);
  digitalWrite (azul1 , LOW);
  digitalWrite (verde1 , LOW);
  digitalWrite (rojo2 , HIGH);
  digitalWrite (verde2 , HIGH);
  delay(500);

}






