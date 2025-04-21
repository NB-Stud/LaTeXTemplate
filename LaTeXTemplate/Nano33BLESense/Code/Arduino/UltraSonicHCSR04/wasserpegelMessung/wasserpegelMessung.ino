/**
 * @file wasserstandsensor.ino
 * @brief Misst den Wasserstand mithilfe eines Ultraschallsensors (HC-SR04).
 * 
 * Dieses Programm verwendet die NewPing-Bibliothek zur Messung des Abstands
 * zwischen Sensor und Wasseroberflaeche und berechnet daraus den Wasserstand.
 * 
 * Die Berechnung erfolgt mit folgender Formel:
 * \f[
 * s = \text{Tankhoehe} - \text{gemessene Entfernung}
 * \f]
 * 
 * Bei einem kritischen Wasserstand < 5 cm wird eine Warnung ueber die serielle
 * Schnittstelle ausgegeben.
 */

#include <NewPing.h>

/// Pin fuer das Triggersignal des Ultraschallsensors
#define TRIGGER_PIN 9

/// Pin fuer das Echosignal des Ultraschallsensors
#define ECHO_PIN 6

/// Maximale Messdistanz des Sensors in Zentimetern
#define MAX_DISTANCE 100

/// Initialisierung des Ultraschallsensors
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/// Variable zur Speicherung des berechneten Wasserstands
int wasserstand;

/// Hoehe des Tanks in Zentimetern
const int tankhoehe = 40;

/**
 * @brief Initialisierung der seriellen Schnittstelle.
 */
void setup() {
  Serial.begin(9600);
}

/**
 * @brief Hauptloop zur regelmaessigen Abstandsmessung und Wasserstandskontrolle.
 */
void loop() {
  delay(500);

  /// Gemessene Entfernung zur Wasseroberflaeche in cm
  int entfernung = sonar.ping_cm();

  // Berechnung des aktuellen Wasserstands
  wasserstand = tankhoehe - entfernung;

  Serial.print("Aktueller Wasserstand: ");
  Serial.print(wasserstand);
  Serial.println(" cm");

  // Beispielhafte Warnung bei niedrigem Wasserstand
  if (wasserstand < 5) {
    Serial.println("WARNUNG: Wasserstand kritisch niedrig!");
  }
}
