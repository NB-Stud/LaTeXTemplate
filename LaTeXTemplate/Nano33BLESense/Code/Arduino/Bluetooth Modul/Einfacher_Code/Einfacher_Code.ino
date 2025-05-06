#include <SoftwareSerial.h>

SoftwareSerial bluetooth(2, 3); // RX=2, TX=3

void setup() {
  pinMode(13, OUTPUT);          // Interne LED
  bluetooth.begin(9600);        // Starte Bluetooth
}

void loop() {
  if (bluetooth.available()) {  // Wenn Verbindung besteht
    digitalWrite(13, HIGH);     // LED AN
    bluetooth.println("OK!");   // Antwort senden
    delay(1000);                // Verhindere Spam
  } else {
    digitalWrite(13, LOW);      // LED AUS
  }
}
