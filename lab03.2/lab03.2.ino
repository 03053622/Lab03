word Analogin;
float Vin;
void setup() {
  Serial.begin(9600);
  Analogin = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<=5;i++){
    Analogin = 0.7* Analogin + 0.3* analogRead(A0);
  }
  Serial.println(Analogin);
  Vin = Analogin * 2.5 / 4095;
  Serial.println(Vin);
  delay(500);
}
