void setup() {
  pinMode(D1, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  byte buttonInp = digitalRead(D1);

  if (buttonInp == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
