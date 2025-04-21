/**
 * @file blink_led.ino
 * @brief Blinkt die integrierte LED des Arduino-Boards in 0,5-Sekunden-Intervallen.
 *
 * Dieses einfache Beispiel demonstriert, wie man mit `digitalWrite()` und `delay()` die
 * integrierte LED (meist auf Pin LED_BUILTIN) blinken lassen kann.
 *
 * @author Dein Name
 * @date 2025-04-13
 */

/**
 * @brief Setup-Funktion wird einmal beim Start des Programms aufgerufen.
 * 
 * Initialisiert den integrierten LED-Pin als Ausgang.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); /**< Setzt den LED-Pin als Ausgang */
}

/**
 * @brief Loop-Funktion wird kontinuierlich ausgeführt.
 * 
 * Schaltet die LED an, wartet 500 ms, schaltet sie aus und wartet erneut.
 * So entsteht ein Blinkeffekt.
 */
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); /**< LED einschalten */
  delay(500);                      /**< 500 Millisekunden warten */
  
  digitalWrite(LED_BUILTIN, LOW);  /**< LED ausschalten */
  delay(500);                      /**< 500 Millisekunden warten */
}
