/**
 * @file magicFaucetFountain.cpp
 * @brief Implementation of functions for the automatic watering system.
 */

#include "magicFaucetFountain.h"

// Define global variables and objects
WaterState currentWaterState = NORMAL;
bool bleConnected = false;
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

BLEService sensorService(SERVICE_UUID);
BLECharacteristic commandChar(COMMAND_UUID, BLERead | BLEWrite | BLENotify, 50);
BLECharacteristic measurementChar(MEASUREMENT_UUID, BLENotify, 50);
BLECharacteristic stateChar(WATERSTATE_UUID, BLENotify, 50);

/**
 * @brief Initializes pins, BLE, and sensors.
 * 
 * Sets pin modes, starts serial communication and Bluetooth.
 * Adds BLE services and characteristics and starts advertising.
 */
void setup() {
  Serial.begin(9600);

  pinMode(PIN_PUMPE, OUTPUT);
  pinMode(PIN_BLE_LED, OUTPUT);
  pinMode(PIN_POWER_LED, OUTPUT);

  digitalWrite(PIN_PUMPE, LOW);
  digitalWrite(PIN_BLE_LED, LOW);
  digitalWrite(PIN_POWER_LED, HIGH);

  if (!BLE.begin()) {
    Serial.println("BLE initialization failed!");
    while (1);
  }

  BLE.setLocalName("Magic Faucet Fountain");
  BLE.setAdvertisedService(sensorService);

  sensorService.addCharacteristic(commandChar);
  sensorService.addCharacteristic(measurementChar);
  sensorService.addCharacteristic(stateChar);

  BLE.addService(sensorService);
  BLE.advertise();

  delay(500);
  handleWaterLevel(true);  // Measure and report immediately after start
  Serial.println("System ready");
}

/**
 * @brief Main program loop.
 * 
 * Monitors Bluetooth connection, measures water level, and processes commands.
 */
void loop() {
  handleBluetoothConnection();
  handleWaterLevel(false);
  handlePumpCommand();
  delay(50);
}

/**
 * @brief Monitors Bluetooth connection and controls the status LED.
 * 
 * LED stays on if connected, otherwise blinks every 500 ms.
 * Restarts advertising if no connection exists.
 */
void handleBluetoothConnection() {
  static unsigned long lastBlink = 0;
  BLEDevice central = BLE.central();

  if (central && central.connected()) {
    digitalWrite(PIN_BLE_LED, HIGH);
    bleConnected = true;
  } else {
    if (millis() - lastBlink >= 500) {
      lastBlink = millis();
      digitalWrite(PIN_BLE_LED, !digitalRead(PIN_BLE_LED));
    }
    bleConnected = false;
    BLE.advertise();
  }
}

/**
 * @brief Measures water level and updates BLE characteristics.
 * 
 * @param forceUpdate Forces measurement and BLE update regardless of interval if true.
 * If false, measurement happens only every MEASURE_INTERVAL milliseconds.
 * 
 * The ultrasonic sensor measures the water level, value is sent via BLE.
 * Depending on the water level, the state is set and the pump is controlled accordingly.
 */
void handleWaterLevel(bool forceUpdate) {
  static unsigned long lastMeasure = 0;
  unsigned long now = millis();

  if (forceUpdate || now - lastMeasure >= MEASURE_INTERVAL) {
    lastMeasure = now;
    unsigned int level = sonar.ping_cm();

    char msg[20];
    if (level == 0 || level > 50) {
      snprintf(msg, sizeof(msg), ">50cm");
    } else {
      snprintf(msg, sizeof(msg), "%ucm", level);
    }
    measurementChar.writeValue(msg);

    WaterState newState = (level < LOWER_LIMIT) ? TOO_HIGH :
                          (level > UPPER_LIMIT) ? TOO_LOW : NORMAL;

    bool stateChanged = (newState != currentWaterState);
    currentWaterState = newState;

    if (stateChanged || forceUpdate) {
      controlPump();
    }

    const char* stateMsg = "";
    switch (currentWaterState) {
      case TOO_LOW:  stateMsg = "Water level too low"; break;
      case TOO_HIGH: stateMsg = "Water level too high"; break;
      default:       stateMsg = "Normal operation";
    }
    stateChar.writeValue(stateMsg);

    Serial.print(level); Serial.print("cm - ");
    Serial.println(stateMsg);
  }
}

/**
 * @brief Shuts off the pump if the water level is not normal.
 * 
 * Acts as a safety shutdown to prevent damage.
 */
void controlPump() {
  if (currentWaterState != NORMAL) {
    digitalWrite(PIN_PUMPE, LOW);
    Serial.println("Pump deactivated (safety shutdown)");
  }
}

/**
 * @brief Processes commands received via BLE.
 * 
 * Supported commands:
 * - "on"  : Turns pump on (only if water level is normal)
 * - "off" : Turns pump off
 * 
 * Sends status messages over BLE and logs to Serial.
 */
void handlePumpCommand() {
  if (!commandChar.written()) return;

  byte cmdBuffer[50];
  int len = commandChar.readValue(cmdBuffer, 50);
  if (len <= 0) return;

  String command = String((char*)cmdBuffer).substring(0, len);
  command.trim();
  command.toLowerCase();

  if (command == "on") {
    if (currentWaterState == NORMAL) {
      digitalWrite(PIN_PUMPE, HIGH);
      commandChar.writeValue("Pump ON");
      Serial.println("Pump activated");
    } else {
      String blockMsg = "Pump blocked - ";
      blockMsg += (currentWaterState == TOO_LOW) ? "Water level too low" : "Water level too high";
      commandChar.writeValue(blockMsg.c_str());
      Serial.println(blockMsg);
    }
  } else if (command == "off") {
    digitalWrite(PIN_PUMPE, LOW);
    commandChar.writeValue("Pump OFF");
    Serial.println("Pump deactivated");
  }
}
