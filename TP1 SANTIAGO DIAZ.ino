#define rojo1 3
#define verde1 5
#define rojo2 4
#define azul2 2
#define verde2 6
#define rojo3 7
#define azul3 9
#define verde3 10
#define buzzer 11
void setup()
{
  pinMode(rojo1, OUTPUT);
  pinMode(verde1, OUTPUT);
  pinMode(rojo2, OUTPUT);
  pinMode(azul2, OUTPUT);
  pinMode(verde2, OUTPUT);
  pinMode(rojo3, OUTPUT);
  pinMode(azul3, OUTPUT);
  pinMode(verde3, OUTPUT);
  
}

void loop()
{
  analogWrite (rojo1 , 255);
  delay (1000);
  
  analogWrite (buzzer , 255);
  delay (100);
  analogWrite (buzzer , 0);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (1000);
  
  
  
  digitalWrite (azul2 , HIGH);
  digitalWrite (rojo1 , LOW);
  digitalWrite (rojo2 , HIGH);
  delay (1000);
  
  digitalWrite (azul2 , LOW);
  digitalWrite (rojo2 , LOW);
  analogWrite (buzzer , 255);
  delay (100);
  analogWrite (buzzer , 0);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (1000);
  
  digitalWrite (azul2 , LOW);
  digitalWrite (rojo2 , LOW);
  analogWrite  (verde3 , 100);
  analogWrite  (azul3 , 100);
  delay(1000);
  
  analogWrite  (verde3 , 0);
  analogWrite  (azul3 , 0);
  analogWrite (buzzer , 255);
  delay (100);
  analogWrite (buzzer , 0);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (100);
  analogWrite (verde1 , 165);
  digitalWrite (rojo1 , HIGH);
  analogWrite (verde2 , 165);
  digitalWrite (rojo2 , HIGH);
  analogWrite (verde3 , 165);
  digitalWrite (rojo3 , HIGH);
  delay (100);
  analogWrite (verde1 , 0);
  digitalWrite (rojo1 , LOW);
  analogWrite (verde2 , 0);
  digitalWrite (rojo2 , LOW);
  analogWrite (verde3 , 0);
  digitalWrite (rojo3 , LOW);
  delay (1000);
  
  digitalWrite (verde3 , LOW);
  digitalWrite (azul3 , LOW);
  delay (1000);
}