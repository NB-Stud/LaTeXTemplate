/**
 * @file ablaufApplikation.ino
 * @brief Automated flowerpot with Bluetooth status, pump control, and water level measurement.
 */

#include <SoftwareSerial.h>
#include <RemoteXY.h>

// RemoteXY Bluetooth (HC-05) via SoftwareSerial
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
  uint8_t pumpSwitch;       ///< 0 = Off, 1 = On
  char statusText[128];     ///< Text display for warnings
  uint8_t connect_flag;     ///< Bluetooth connection status
} RemoteXY;
#pragma pack(pop)

// Pin definitions
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
 * @brief Initializes pins and RemoteXY
 */
void setup() {
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_BLUE, OUTPUT);
  pinMode(PIN_PUMP, OUTPUT);
  pinMode(PIN_TRIGGER, OUTPUT);
  pinMode(PIN_ECHO, INPUT);

  digitalWrite(PIN_LED_GREEN, HIGH); // Green LED always on

  RemoteXY_Init();
}

/**
 * @brief Main loop: water level measurement, display update, Bluetooth status, and pump control
 */
void loop() {
  RemoteXY_Handler();
  updateBluetoothStatusLED();

  int distance = measureWaterLevel();

  // Basic warning message
  if (distance > MAX_WATER_LEVEL) {
    strcpy(RemoteXY.statusText, "WARNING: No water left!");
  } 
  else if (distance < MIN_WATER_LEVEL) {
    strcpy(RemoteXY.statusText, "WARNING: Low level!");
    if (RemoteXY.pumpSwitch) {
      strcat(RemoteXY.statusText, " - Pump deactivated!");
    }
  } 
  else {
    strcpy(RemoteXY.statusText, "Level OK.");
  }

  // Pump only active when switched ON and water level is sufficient
  if (RemoteXY.pumpSwitch && distance >= MIN_WATER_LEVEL) {
    digitalWrite(PIN_PUMP, HIGH);
  } else {
    digitalWrite(PIN_PUMP, LOW);
  }

  delay(1000);
}

/**
 * @brief Measures the distance (water level) using HC-SR04 ultrasonic sensor
 * @return Distance in centimeters
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
 * @brief Controls the blue LED depending on Bluetooth connection (blinking or solid)
 */
void updateBluetoothStatusLED() {
  if (RemoteXY.connect_flag) {
    digitalWrite(PIN_LED_BLUE, HIGH);  // Connected -> LED on
  } else {
    unsigned long currentTime = millis();
    if (currentTime - lastBlinkTime >= 500) {
      blueLedState = !blueLedState;
      digitalWrite(PIN_LED_BLUE, blueLedState);
      lastBlinkTime = currentTime;
    }
  }
}
