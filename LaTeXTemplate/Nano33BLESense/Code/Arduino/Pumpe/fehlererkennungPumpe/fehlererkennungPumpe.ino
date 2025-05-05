/**
 * @file fehlererkennungPumpe.ino
 * @brief Control of the COMET pump with water level monitoring and delivery verification.
 *
 * Detects whether water is actually being pumped while the pump is running
 * (e.g., due to air intake, blockage, or dry running).
 */

const int PUMP_PIN = 2;
const int TRIG_PIN = 3;
const int ECHO_PIN = 4;

const int MIN_WATER_LEVEL_CM = 15;       ///< Minimum water level required to start the pump
const int DELIVERY_TOLERANCE_CM = 1;     ///< Minimum level change expected during pumping
const unsigned long MEASUREMENT_INTERVAL = 3000;
const unsigned long DELIVERY_TEST_TIME = 3000; ///< Max time allowed for pump test

unsigned long lastMeasurementTime = 0;
bool pumpIsRunning = false;

/**
 * @brief Initializes the GPIO pins and serial communication.
 */
void setup() {
  pinMode(PUMP_PIN, OUTPUT);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  stopPump();

  Serial.begin(9600);
  while (!Serial);
  Serial.println("System start with error monitoring.");
}

/**
 * @brief Main loop that checks water level and verifies pump delivery.
 */
void loop() {
  if (millis() - lastMeasurementTime >= MEASUREMENT_INTERVAL) {
    lastMeasurementTime = millis();

    int levelBefore = measureWaterLevel();
    Serial.print("Water level (before): ");
    Serial.print(levelBefore);
    Serial.println(" cm");

    if (levelBefore > MIN_WATER_LEVEL_CM) {
      Serial.println("WARNING: Water level too low.");
      stopPump();
      return;
    }

    // Start pump and allow test run
    startPump();
    delay(DELIVERY_TEST_TIME);

    int levelAfter = measureWaterLevel();
    Serial.print("Water level (after): ");
    Serial.print(levelAfter);
    Serial.println(" cm");

    // Check for significant change in water level
    if (abs(levelAfter - levelBefore) < DELIVERY_TOLERANCE_CM) {
      Serial.println("ERROR: No water delivered! Please check the system.");
      stopPump();
    } else {
      Serial.println("Pump is operating correctly.");
    }

    delay(5000); // Pause before next cycle
  }
}

/**
 * @brief Measures the distance to the water surface using the HC-SR04 ultrasonic sensor.
 * @return Distance in centimeters.
 */
int measureWaterLevel() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000); // Timeout: 30ms
  if (duration == 0) return 999; // Sensor error

  int distance = duration * 0.034 / 2;
  return distance;
}

/**
 * @brief Turns on the pump by setting the control pin HIGH.
 */
void startPump() {
  digitalWrite(PUMP_PIN, HIGH);
  pumpIsRunning = true;
}

/**
 * @brief Turns off the pump by setting the control pin LOW.
 */
void stopPump() {
  digitalWrite(PUMP_PIN, LOW);
  pumpIsRunning = false;
}

