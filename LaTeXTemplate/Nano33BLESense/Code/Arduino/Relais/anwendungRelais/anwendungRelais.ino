/**
 * @file anwendungRelais.ino
 * @brief Relay-controlled PC fan triggered by temperature threshold.
 *
 * This program reads temperature from an analog temperature sensor.
 * If the temperature exceeds 40 °C, it activates a relay to turn on a PC fan.
 * Otherwise, the relay (and fan) remains off.
 *
 * @author Gruppe 07
 * @date 2025-06-18
 */

/// Pin for the temperature sensor (analog input)
const int tempSensorPin = A0;

/// Pin to control the relay module
const int relayPin = 7;

/// Temperature threshold in °C to turn on the fan
const float tempThreshold = 40.0;

/**
 * @brief Converts raw analog sensor reading to temperature in Celsius.
 *
 * Assumes TMP36 sensor by default: 10 mV/°C with 500 mV offset at 0 °C.
 * Adjust this function as needed for your sensor.
 *
 * @param analogValue Raw analog value from sensor
 * @return Temperature in degrees Celsius
 */
float readTemperature(int analogValue) {
  float voltage = analogValue * (5.0 / 1023.0); // Convert to voltage
  float temperatureC = (voltage - 0.5) * 100.0; // TMP36: 0.5 V offset, 10 mV/°C
  return temperatureC;
}

/**
 * @brief Arduino setup function
 *
 * Initializes the relay pin and serial communication.
 */
void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Relay OFF (assuming active LOW)
  Serial.println("Temperature-controlled fan relay system initialized.");
}

/**
 * @brief Arduino main loop
 *
 * Monitors temperature and controls relay accordingly.
 */
void loop() {
  int sensorValue = analogRead(tempSensorPin);
  float temperature = readTemperature(sensorValue);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature > tempThreshold) {
    digitalWrite(relayPin, LOW);  // Relay ON (fan ON)
    Serial.println("Fan ON");
  } else {
    digitalWrite(relayPin, HIGH); // Relay OFF (fan OFF)
    Serial.println("Fan OFF");
  }

  delay(1000); // Update once per second
}
