#include "ESP8266WiFi.h"

const char* ssid     = "ssid";
const char* password = "password";
const char* hostname = "esp8266";

byte relayFlag = HIGH;

void setup() {
  WiFi.hostname(hostname);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) { delay(500); }

  pinMode(D1, INPUT);
  pinMode(D2, OUTPUT);

  digitalWrite(D2, HIGH); // Default - starting state
}

void loop() {
  byte buttonInp = digitalRead(D1);

  if (buttonInp == HIGH) {
    if (relayFlag == LOW) {
      relayFlag = HIGH;
      digitalWrite(D2, HIGH);
    } else {
      relayFlag = LOW;
      digitalWrite(D2, LOW);
    }
    delay(1000);
  }
}
