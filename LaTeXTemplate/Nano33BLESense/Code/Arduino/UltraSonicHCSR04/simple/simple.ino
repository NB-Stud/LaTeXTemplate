/**
 * @file simple.ino
 * @brief Blinks the built-in LED of the Arduino board at 0.5-second intervals.
 *
 * This simple example demonstrates how to use `digitalWrite()` and `delay()` to 
 * make the built-in LED (usually connected to LED_BUILTIN) blink.
 *
 * @author Your Name
 * @date 2025-04-13
 */

/**
 * @brief The setup function is called once when the program starts.
 * 
 * Initializes the built-in LED pin as an output.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); /**< Set the LED pin as output */
}

/**
 * @brief The loop function runs continuously.
 * 
 * Turns the LED on, waits 500 ms, turns it off, and waits again.
 * This creates a blinking effect.
 */
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); /**< Turn on the LED */
  delay(500);                      /**< Wait for 500 milliseconds */
  
  digitalWrite(LED_BUILTIN, LOW);  /**< Turn off the LED */
  delay(500);                      /**< Wait for 500 milliseconds */
}
