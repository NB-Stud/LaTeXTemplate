/**
 * @file blinkenLED.ino
 * @brief LED blinking with multiple frequencies
 * 
 * This sketch blinks an LED at different frequencies sequentially.
 * It demonstrates control of delay timing to create various blink patterns.
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
 * @brief Blinks the LED with the specified on/off delay and repetitions
 * @param delayTime Delay time in milliseconds between on and off states
 * @param repetitions Number of times the LED should blink
 */
void blinkPattern(int delayTime, int repetitions) {
  for (int i = 0; i < repetitions; i++) {
    digitalWrite(ledPin, HIGH);  // Turn the LED on
    delay(delayTime);            // Wait
    digitalWrite(ledPin, LOW);   // Turn the LED off
    delay(delayTime);            // Wait
  }
}

/**
 * @brief Main loop: executes multiple blink patterns in sequence
 */
void loop() {
  blinkPattern(1000, 3);  // Blink slowly (1 Hz) three times
  blinkPattern(500, 5);   // Blink at medium speed (2 Hz) five times
  blinkPattern(200, 10);  // Blink fast (5 Hz) ten times
  delay(2000);            // Wait before repeating the sequence
}
