#include <SoftwareSerial.h>

#define RELAY_PIN 7  // Arduino-Pin für das Relais

SoftwareSerial bluetooth(2, 3); // RX=2, TX=3

void setup() {
  pinMode(RELAY_PIN, OUTPUT);   // Relais als Ausgang
  digitalWrite(RELAY_PIN, LOW); // Starte mit AUS
  bluetooth.begin(9600);        // Bluetooth starten
  bluetooth.println("Stehleuchte bereit! Sende 'E' für EIN, 'A' für AUS.");
}

void loop() {
  if (bluetooth.available()) {
    char cmd = bluetooth.read(); // Befehl lesen

    if (cmd == 'E') {           // EIN
      digitalWrite(RELAY_PIN, HIGH);
      bluetooth.println("Stehleuchte EIN");
    } 
    else if (cmd == 'A') {      // AUS
      digitalWrite(RELAY_PIN, LOW);
      bluetooth.println("Stehleuchte AUS");
    }
  }
}
