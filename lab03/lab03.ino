const byte Pin = 13;
byte val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    val = Serial.read();
    if(val=='1'){
      digitalWrite(Pin, HIGH);
      Serial.println("LED ON");
    }
    else if (val=='0'){
      digitalWrite(Pin, LOW);
      Serial.println("LED OFF");
    }
  }
}
