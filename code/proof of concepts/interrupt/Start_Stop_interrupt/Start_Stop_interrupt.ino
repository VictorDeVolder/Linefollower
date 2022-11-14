const int drukknop = 2;
const int Led = 12; 
bool StatusKnop; 
bool led_aan; 

void setup() {
  Serial.begin(9600);

  pinMode(drukknop, INPUT);
  pinMode(Led, OUTPUT); 
   
}

void loop() {

  StatusKnop = digitalRead(drukknop);
  
  if (StatusKnop == HIGH)
  { 
     
    digitalWrite(Led, HIGH);
    led_aan = false;
    delay(5000);
  }
  else if (StatusKnop == LOW && led_aan == false)
  {
    digitalWrite(Led, LOW);
  }
}
