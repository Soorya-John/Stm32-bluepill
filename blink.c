void setup() {
  pinMode(PC13, OUTPUT); // PC13 is usually the built-in LED pin
}

void loop() {
  digitalWrite(PC13, HIGH); // LED off (inverted logic on Blue Pill)
  delay(500);
  digitalWrite(PC13, LOW);  // LED on
  delay(500);
}
