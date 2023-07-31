
// LED ARDUINO
void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int buttonState = Serial.read();
    if (buttonState == '1'){
      digitalWrite(7, HIGH);
    }else{
      digitalWrite(7, LOW);
    }
  }
  delay(10);
}