/**
 * @file einfachRelais.ino
 * @brief Relay blinking test at 1 Hz for 10 seconds.
 *
 * This sketch toggles a relay on and off every second (1 Hz) for 10 seconds.
 * The relay should make a clicking sound each time it switches.
 *
 * @author Gruppe 07
 * @date 2025-06-18
 */

/// Relay control pin (connected to IN pin on relay module)
const int relayPin = 7;

/// Number of on/off cycles (1 Hz for 10 seconds)
const int numCycles = 10;

/// Delay in milliseconds for half a cycle (0.5 s)
const int halfPeriod = 500;

/**
 * @brief Arduino setup function
 *
 * Initializes the relay pin and toggles the relay with 1 Hz frequency for 10 seconds.
 */
void setup() {
  // Initialize serial communication (optional)
  Serial.begin(9600);

  // Set relay pin as output
  pinMode(relayPin, OUTPUT);

  Serial.println("Starting 1 Hz relay blink test...");

  // Blink relay at 1 Hz for 10 seconds (10 cycles)
  for (int i = 0; i < numCycles; ++i) {
    digitalWrite(relayPin, LOW);   // Relay ON (assuming active LOW)
    delay(halfPeriod);             // Wait 0.5 seconds
    digitalWrite(relayPin, HIGH);  // Relay OFF
    delay(halfPeriod);             // Wait 0.5 seconds
  }

  Serial.println("Relay test completed.");
}

/**
 * @brief Arduino loop function
 *
 * Empty loop since the test is done in setup().
 */
void loop() {
  // Nothing to do here
}
