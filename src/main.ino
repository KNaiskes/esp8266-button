#include "ESP8266WiFi.h"

const char* ssid     = "ssid";
const char* password = "password";
const char* hostname = "esp8266";

void setup() {
  WiFi.hostname(hostname);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }

  pinMode(D1, INPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
  byte buttonInp = digitalRead(D1);

  if (buttonInp == HIGH) {
    digitalWrite(D2, LOW);
  } else {
    digitalWrite(D2, HIGH);
  }
}
