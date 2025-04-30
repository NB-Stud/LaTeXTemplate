/**
 * @file schwellenwertMeldung.ino
 * @brief Simple application using an HC-SR04 ultrasonic sensor to monitor a distance threshold.
 * 
 * This program continuously measures the distance using the HC-SR04 sensor and triggers a warning
 * when a critical threshold of 25 cm is reached or undershot. The distance is measured using 
 * pingMedian() for stable values, and getDistance() is also demonstrated for direct measurement.
 */

#include <NewPing.h>

#define TRIGGER_PIN     9    ///< Pin connected to the trigger pin of the HC-SR04
#define ECHO_PIN        10   ///< Pin connected to the echo pin of the HC-SR04
#define MAX_DISTANCE    100  ///< Maximum distance to measure (in cm)

#define TARGET_DISTANCE     30  ///< Reference distance (in cm)
#define CRITICAL_THRESHOLD  25  ///< Critical threshold for warning (in cm)

/// Create a NewPing object named `sonar`
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/**
 * @brief Arduino setup function.
 * 
 * Initializes serial communication and outputs startup message.
 */
void setup() {
  Serial.begin(9600);
  Serial.println("Distance threshold monitoring started...");
}

/**
 * @brief Arduino main loop function.
 * 
 * Continuously measures the distance using pingMedian().
 * If the measured distance is less than or equal to the critical threshold,
 * a warning message is printed.
 */
void loop() {
  delay(500); // Measurement interval

  // Use pingMedian() for stable distance reading (average of multiple pings)
  unsigned int distance = sonar.pingMedian();

  // Print measured distance
  Serial.print("Measured distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if distance is at or below critical threshold
  if (distance > 0 && distance <= CRITICAL_THRESHOLD) {
    Serial.println("WARNING: Critical distance reached!");
  }

  // Optional: demonstrate use of getDistance() (less accurate, uses default single ping)
  // unsigned int quickDistance = sonar.getDistance();
  // Serial.print("Quick distance (getDistance): ");
  // Serial.print(quickDistance);
  // Serial.println(" cm");
}
