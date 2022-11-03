const int drukknop = 2;
const int LedBlauw = 12; 
bool StatusKnop; 
bool led_aan; 

void setup() {
  Serial.begin(9600);

  pinMode(drukknop, INPUT);
  pinMode(LedBlauw, OUTPUT); 
   
}

void loop() {

  StatusKnop = digitalRead(drukknop);
  
  if (StatusKnop == HIGH)
  { 
    digitalWrite(LedBlauw, HIGH);
    delay(3000);
  }
  else 
  {
    digitalWrite(LedBlauw, LOW);
  }

}
