int IN1 = 3; 
int IN2 = 11;
int IN3 = 9; 
int IN4 = 10;

const int drukknop = 2;
bool toestand_drukknop; 

void setup() {
  Serial.begin(9600); 

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(drukknop, INPUT);
  
}

void loop() {

  toestand_drukknop = digitalRead(drukknop); 

  if (toestand_drukknop == HIGH) 
  {

    //Voorwaarts 
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(20);
    }
    
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
    }
    delay(3000); 

    //Achterwaarts  
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
      delay(20);
    }
    
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, 0);
      analogWrite(IN2, i);
      analogWrite(IN3, 0);
      analogWrite(IN4, i);
    }
    delay(3000); 

    //Motor rechts  
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, 0);
      delay(20);
    }
    
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, i);
      analogWrite(IN2, 0);
      analogWrite(IN3, 0);
      analogWrite(IN4, 0);
    }
    delay(3000); 

        //Motor links  
    for(int i = 0; i <= 255; i++) 
    {
      analogWrite(IN1, 0);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
      delay(20);
    }
    
    for(int i = 255; i >= 0; i--) 
    { 
      analogWrite(IN1, 0);
      analogWrite(IN2, 0);
      analogWrite(IN3, i);
      analogWrite(IN4, 0);
    }
    delay(3000); 
  }
}
