/**
 * @file entfernungMessung.ino
 * @brief Simple program to measure and display distance in centimeters using the HC-SR04 ultrasonic sensor.
 * 
 * This program initializes the HC-SR04 sensor and continuously measures the distance to an object.
 * The distance is displayed in centimeters on the Serial Monitor using the NewPing library.
 */

#include <NewPing.h>

// Define pins and maximum measurement distance
#define TRIGGER_PIN   9     ///< Pin connected to the trigger pin of the HC-SR04
#define ECHO_PIN      10    ///< Pin connected to the echo pin of the HC-SR04
#define MAX_DISTANCE  200   ///< Maximum distance to measure (in cm)

/// Create a NewPing object for distance measurement
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

/**
 * @brief Arduino setup function.
 * 
 * Initializes serial communication and prints startup message.
 */
void setup() {
  Serial.begin(9600);
  Serial.println("Simple distance measurement started...");
}

/**
 * @brief Arduino main loop function.
 * 
 * Measures the distance using getDistance() and prints it in centimeters.
 */
void loop() {
  delay(1000); // Wait 1 second between measurements

  // Measure distance in cm (automatically calculated by NewPing)
  unsigned int distance = sonar.getDistance();

  // Print result
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
