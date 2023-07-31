//button arduino

void setup() {
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(4);
  Serial.println(buttonState); 
  delay(10);
}