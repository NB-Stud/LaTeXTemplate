/**
 * @file ansteuerungPumpe.ino
 * @brief Control of the COMET submersible pump ELEGANT 12V using a MOSFET and an Arduino Nano 33 BLE Sense.
 *
 * The pump is powered by an external 12V power supply and switched via an N-channel MOSFET.
 * The control signals (start/stop) are given via a digital Arduino output pin.
 */

/// GPIO pin on the Arduino to control the MOSFET gate
const int PUMP_PIN = 2;

/// Optional maximum pump runtime in milliseconds (e.g., 60 seconds)
const unsigned long MAX_RUNTIME_MS = 60000;

/// Internal variable for time tracking
unsigned long pumpStartTime = 0;

/**
 * @brief Initializes the pump control pin as output and ensures the pump is off at startup.
 */
void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  stopPump();  // Ensure the pump is off at startup
}

/**
 * @brief Main program loop with a simple start/stop test.
 */
void loop() {
  // Example: Start the pump for a defined time, then stop
  startPump();
  delay(10000); // Run for 10 seconds
  stopPump();
  delay(10000); // Pause for 10 seconds
}

/**
 * @brief Activates the pump by setting the MOSFET gate to HIGH.
 * Also stores the start time for monitoring.
 */
void startPump() {
  digitalWrite(PUMP_PIN, HIGH);
  pumpStartTime = millis();
}

/**
 * @brief Deactivates the pump by setting the MOSFET gate to LOW.
 */
void stopPump() {
  digitalWrite(PUMP_PIN, LOW);
  pumpStartTime = 0;
}

/**
 * @brief Returns whether the pump is currently active.
 * @return true if the pump is running, false otherwise.
 */
bool isPumpActive() {
  return digitalRead(PUMP_PIN) == HIGH;
}
