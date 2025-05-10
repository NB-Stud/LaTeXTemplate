/**
 * @file ablaufApplikation.ino
 * @brief Automatisierter Blumentopf mit Bluetooth-Status, Pumpe und Wasserstandsmessung.
 */

#include <SoftwareSerial.h>
#include <RemoteXY.h>

// RemoteXY Bluetooth (HC-05) über SoftwareSerial
#define REMOTEXY_SERIAL_RX 10
#define REMOTEXY_SERIAL_TX 11
#define REMOTEXY_SERIAL_SPEED 9600

#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] = 
{ 255,1,0,0,0,60,0,13,13,1,
 2,0,7,7,18,8,2,26,31,80,
 117,109,112,101,0,1,0,30,7,
 40,10,2,31,65,110,0,79,117,
 115,0 };

struct {
  uint8_t pumpSwitch;       ///< 0 = Aus, 1 = An
  char statusText[128];     ///< Textanzeige für Warnungen
  uint8_t connect_flag;     ///< Bluetooth-Verbindungsstatus
} RemoteXY;
#pragma pack(pop)

// Pin-Definitionen
const int PIN_LED_GREEN = 2;
const int PIN_LED_BLUE = 3;
const int PIN_PUMP = 4;
const int PIN_TRIGGER = 9;
const int PIN_ECHO = 6;

const int MAX_WATER_LEVEL = 20;
const int MIN_WATER_LEVEL = 5;

unsigned long lastBlinkTime = 0;
bool blueLedState = false;

/**
 * @brief Initialisiert Pins und RemoteXY
 */
void setup() {
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  pinMode(PIN_PUMP, OUTPUT);
  pinMode(PIN_TRIGGER, OUTPUT);
  pinMode(PIN_ECHO, INPUT);

  digitalWrite(PIN_LED_GREEN, HIGH); // Grüne LED dauerhaft ein

  RemoteXY_Init();
}

/**
 * @brief Hauptloop: Messung, Anzeige, Bluetooth-Status und Pumpensteuerung
 */
void loop() {
  RemoteXY_Handler();
  updateBluetoothStatusLED();

  int distance = measureWaterLevel();

  // Basis-Meldung
  if (distance > MAX_WATER_LEVEL) {
    strcpy(RemoteXY.statusText, "WARNUNG: Kein Wasser mehr!");
  } 
  else if (distance < MIN_WATER_LEVEL) {
    strcpy(RemoteXY.statusText, "WARNUNG: Pegel niedrig!");
    if (RemoteXY.pumpSwitch) {
      strcat(RemoteXY.statusText, " - Pumpe deaktiviert!");
    }
  } 
  else {
    strcpy(RemoteXY.statusText, "Pegel OK.");
  }

  // Pumpe nur aktiv, wenn manuell EIN und Pegel ausreichend
  if (RemoteXY.pumpSwitch && distance >= MIN_WATER_LEVEL) {
    digitalWrite(PIN_PUMP, HIGH);
  } else {
    digitalWrite(PIN_PUMP, LOW);
  }

  delay(1000);
}

/**
 * @brief Misst den Abstand (Wasserstand) mit Ultraschallsensor HC-SR04
 * @return Abstand in Zentimeter
 */
int measureWaterLevel() {
  digitalWrite(PIN_TRIGGER, LOW);
  delayMicroseconds(2);
  digitalWrite(PIN_TRIGGER, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIGGER, LOW);

  long duration = pulseIn(PIN_ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}

/**
 * @brief Steuert die blaue LED je nach Bluetooth-Status (blinken oder dauerhaft an)
 */
void updateBluetoothStatusLED() {
  if (RemoteXY.connect_flag) {
    digitalWrite(PIN_LED_BLUE, HIGH);  // Verbindung -> LED an
  } else {
    unsigned long currentTime = millis();
    if (currentTime - lastBlinkTime >= 500) {
      blueLedState = !blueLedState;
      digitalWrite(PIN_LED_BLUE, blueLedState);
      lastBlinkTime = currentTime;
    }
  }
}
