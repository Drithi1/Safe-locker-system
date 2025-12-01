#include <WiFi.h>

void setup() {
  Serial.begin(115200);         // Start Serial Monitor
  WiFi.mode(WIFI_STA);          // Set WiFi to Station mode
  Serial.println();
  Serial.println("Receiver MAC Address:");
  Serial.println(WiFi.macAddress());  // Print MAC address
}

void loop() {
  // Nothing here
}
