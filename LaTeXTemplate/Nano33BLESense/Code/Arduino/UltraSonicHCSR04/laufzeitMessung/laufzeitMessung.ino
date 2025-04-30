/**
 * @file laufzeitMessung.ino
 * @brief Simple test program for measuring the echo time of an HC-SR04 ultrasonic sensor using the NewPing library.
 * 
 * This program initializes the ultrasonic sensor and performs a basic runtime measurement (ping) 
 * to determine the echo time in microseconds. The result is printed to the Serial Monitor.
 */

#include <NewPing.h>

// Define pins and maximum distance
#define TRIGGER_PIN  9    ///< Pin connected to the trigger pin of the HC-SR04
#define ECHO_PIN     10   ///< Pin connected to the echo pin of the HC-SR04
#define MAX_DISTANCE 200  ///< Maximum distance to measure (in cm)

/// Create a NewPing object named `sonar`
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/**
 * @brief Arduino setup function.
 * 
 * Initializes serial communication for output.
 */
void setup() {
  Serial.begin(9600);
  Serial.println("Ultrasonic runtime measurement started...");
}

/**
 * @brief Arduino main loop function.
 * 
 * Measures the echo time using the ping() function and prints it in microseconds.
 */
void loop() {
  delay(1000); // Wait 1 second between measurements

  // Measure echo time in microseconds
  unsigned int echoTime = sonar.ping();

  // Print result
  Serial.print("Echo time: ");
  Serial.print(echoTime);
  Serial.println(" µs");
}
