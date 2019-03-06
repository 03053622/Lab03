word Analogin;
float Val;
word sensorValue = 0;
long  sensorVoltage;
float R1;
int i;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (i=0;i<=5;i++)
    sensorValue = 0.7* sensorValue + 0.3* analogRead(A0);
  sensorVoltage = sensorValue * 5 / 4095;
  R1 = sensorVoltage * 1000000 / 5;
  
  //Output sensorValue, sensorVoltage, and R1 to serial
  Serial.println(sensorValue);
  Serial.println(sensorVoltage);
  Serial.println(R1);
  delay(500);
}
