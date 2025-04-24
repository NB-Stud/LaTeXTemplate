/**
 * @file wasserstandsensor.ino
 * @brief Measures the water level using an ultrasonic sensor (HC-SR04).
 * 
 * This program uses the NewPing library to measure the distance
 * between the sensor and the water surface, and calculates the water level.
 * 
 * The calculation uses the following formula:
 * \f[
 * s = \text{Tank height} - \text{measured distance}
 * \f]
 * 
 * If the water level is below 5 cm, a warning is printed to the serial monitor.
 */

#include <NewPing.h>

/// Pin for the ultrasonic sensor's trigger signal
#define TRIGGER_PIN 9

/// Pin for the ultrasonic sensor's echo signal
#define ECHO_PIN 6

/// Maximum sensor distance in centimeters
#define MAX_DISTANCE 100

/// Initialize the ultrasonic sensor
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/// Variable to store the calculated water level
int waterLevel;

/// Tank height in centimeters
const int tankHeight = 40;

/**
 * @brief Initializes the serial communication.
 */
void setup() {
  Serial.begin(9600);
}

/**
 * @brief Main loop for periodic distance measurement and water level monitoring.
 */
void loop() {
  delay(500);

  /// Measured distance to the water surface in cm
  int distance = sonar.ping_cm();

  // Calculate the current water level
  waterLevel = tankHeight - distance;

  Serial.print("Current water level: ");
  Serial.print(waterLevel);
  Serial.println(" cm");

  // Example warning if water level is critically low
  if (waterLevel < 5) {
    Serial.println("WARNING: Critically low water level!");
  }
}
