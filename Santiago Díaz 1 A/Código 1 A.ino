#define autorojo 2
#define amarillo 3
#define autoverde 4
#define peatonrojo 5
#define peatonverde 6

void setup()
{
  pinMode( autorojo , OUTPUT);
  pinMode( amarillo , OUTPUT);
  pinMode( autoverde , OUTPUT);
  pinMode( peatonrojo , OUTPUT);
  pinMode( peatonverde , OUTPUT);
}

void loop()
{
  digitalWrite ( autorojo , HIGH );
  digitalWrite ( peatonverde , HIGH );
  delay(3000);
  
  
  digitalWrite ( amarillo , HIGH );
  digitalWrite ( peatonverde , LOW );
  digitalWrite ( peatonrojo , HIGH );
  digitalWrite ( autorojo , LOW );
  delay (2000);
  
  
  digitalWrite ( amarillo , LOW );  
  digitalWrite ( autoverde , HIGH );
  delay (3000);
  
  
  digitalWrite ( autoverde , LOW );
  digitalWrite ( amarillo , HIGH );
  delay(2000);
  
  digitalWrite (autorojo , HIGH );
  digitalWrite ( amarillo , LOW );
  digitalWrite ( peatonrojo , LOW );
  digitalWrite (peatonverde , HIGH );
  
}