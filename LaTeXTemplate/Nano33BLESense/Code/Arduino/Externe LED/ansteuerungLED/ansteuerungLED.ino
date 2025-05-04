/**
 * @file ansteuerungLED.ino
 * @brief Simple LED control with Arduino
 * 
 * This sketch turns an LED on and off at 1-second intervals.
 * It demonstrates basic digital output control using the Arduino framework.
 */

/** 
 * @brief Pin number where the LED is connected 
 */
const int ledPin = 13;  ///< LED connected to digital pin 13

/**
 * @brief Initializes the LED pin as an output
 */
void setup() {
  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

/**
 * @brief Main loop: turns the LED on and off with 1-second delay
 */
void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on
  delay(1000);                 // Wait for 1 second
  digitalWrite(ledPin, LOW);   // Turn the LED off
  delay(1000);                 // Wait for 1 second
}
