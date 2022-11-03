int IN1 = 10; 
int IN2 = 9;
int IN3 = 5; 
int IN4 = 3;

void setup() {
  Serial.begin(9600); 

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
}

void loop() {

  
  //Motor links
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 100);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);
  
  //Motor rechts 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 100);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);

  //Voorwaarts 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 100);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 100);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);


  //Achterwaarts
  digitalWrite(IN1, 100);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 100);
  digitalWrite(IN4, 0);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);
  
  //Links

  digitalWrite(IN1, 100);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 100);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);

  //Rechts

  digitalWrite(IN1, 0);
  digitalWrite(IN2, 100);
  digitalWrite(IN3, 100);
  digitalWrite(IN4, 0);

  delay(3000);

  // Stoppen 
  digitalWrite(IN1, 0);
  digitalWrite(IN2, 0);
  digitalWrite(IN3, 0);
  digitalWrite(IN4, 0);

  delay(5000);

}
