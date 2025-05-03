/**
 * @file anwendungSchaltnetzteil.ino
 * @brief Controls a 12V fan via a MOSFET based on room humidity.
 *
 * If the room humidity drops below 40%, the Arduino activates DO1,
 * which switches a MOSFET to power a 12V fan.
 *
 * @date 2025-04-28
 */

#include <DHT.h>

/// Digital pin connected to the DHT sensor
#define DHT_PIN 2

/// Digital pin to control the MOSFET (DO1)
#define FAN_CONTROL_PIN 3

/// DHT sensor type: DHT11 or DHT22
#define DHT_TYPE DHT22

/// Humidity threshold in percent
#define HUMIDITY_THRESHOLD 40.0

/// DHT sensor instance
DHT dht(DHT_PIN, DHT_TYPE);

/**
 * @brief Arduino setup function.
 * Initializes serial communication, DHT sensor, and fan control pin.
 */
void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(FAN_CONTROL_PIN, OUTPUT);
  digitalWrite(FAN_CONTROL_PIN, LOW); // Ensure fan is off at startup
}

/**
 * @brief Arduino main loop.
 * Reads humidity and activates fan if below threshold.
 */
void loop() {
  float humidity = dht.readHumidity();

  // Check if sensor reading is valid
  if (isnan(humidity)) {
    Serial.println("Failed to read humidity from sensor.");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Control fan based on humidity
  if (humidity < HUMIDITY_THRESHOLD) {
    digitalWrite(FAN_CONTROL_PIN, HIGH);  ///< Turn on fan
    Serial.println("Fan ON (humidity below threshold)");
  } else {
    digitalWrite(FAN_CONTROL_PIN, LOW);   ///< Turn off fan
    Serial.println("Fan OFF (humidity above threshold)");
  }

  delay(2000); // Wait before next reading
}

