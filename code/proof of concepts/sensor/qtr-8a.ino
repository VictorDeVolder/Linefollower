int Array[8] = {A7, A6, A5, A4, A3, A2, A1, A0};
int waarde;
void setup()
{
  Serial.begin(9600);
}
void loop() {
  Serial.print("Waarde Sensoren: ");
  for (int i = 0; i < 8; i++)
  {
    waarde = analogRead(Array[i]);
    Serial.print(waarde);
    Serial.print(" ");
  }
  Serial.println();
  delay(1000); 
}