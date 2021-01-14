#include "ESP8266WiFi.h"

const char* ssid     = "ssid
const char* password = "password
const char* hostname = "esp8266";

void setup() {
  WiFi.hostname(hostname);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }

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
