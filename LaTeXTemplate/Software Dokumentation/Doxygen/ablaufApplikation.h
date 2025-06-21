/**
 * @file magicFaucetFountain.h
 * @brief Control system for an automatic flower pot pump using Bluetooth and water level monitoring.
 * 
 * This module uses Bluetooth Low Energy (BLE) for communication and an ultrasonic sensor
 * to monitor the water level. The pump is controlled based on the water level and Bluetooth commands.
 */

#ifndef MAGIC_FAUCET_FOUNTAIN_H
#define MAGIC_FAUCET_FOUNTAIN_H

#include <ArduinoBLE.h>
#include <NewPing.h>

// Pin definitions
#define PIN_PUMPE         2  ///< Pin for pump control (output)
#define PIN_BLE_LED       3  ///< LED indicating Bluetooth connection status
#define PIN_POWER_LED     4  ///< LED indicating power status
#define TRIG_PIN          9  ///< Trigger pin for ultrasonic sensor
#define ECHO_PIN          6  ///< Echo pin for ultrasonic sensor

// UUIDs for BLE service and characteristics
#define SERVICE_UUID      "19B10000-E8F2-537E-4F6C-D104768A1214"
#define COMMAND_UUID      "19B10001-E8F2-537E-4F6C-D104768A1214"
#define MEASUREMENT_UUID  "19B10002-E8F2-537E-4F6C-D104768A1214"
#define WATERSTATE_UUID   "19B10004-E8F2-537E-4F6C-D104768A1214"

// Thresholds and intervals
#define UPPER_LIMIT       20    ///< Upper water level threshold (in cm)
#define LOWER_LIMIT       5     ///< Lower water level threshold (in cm)
#define MEASURE_INTERVAL  500   ///< Measurement interval in milliseconds
#define MAX_DISTANCE      200   ///< Maximum ultrasonic sensor range (in cm)

/**
 * @enum WaterState
 * @brief Represents the water level status.
 */
enum WaterState {
  NORMAL,   ///< Water level is within normal range
  TOO_LOW,  ///< Water level is too low
  TOO_HIGH  ///< Water level is too high
};

extern WaterState currentWaterState; ///< Current water level status
extern bool bleConnected;            ///< Bluetooth connection status
extern NewPing sonar;                ///< Instance of the ultrasonic sensor
extern BLEService sensorService;     ///< BLE service instance
extern BLECharacteristic commandChar;     ///< BLE characteristic for control commands
extern BLECharacteristic measurementChar; ///< BLE characteristic for measurement data
extern BLECharacteristic stateChar;       ///< BLE characteristic for water level status

/**
 * @brief Initializes pins, BLE, and sensors.
 */
void setup();

/**
 * @brief Main program loop.
 */
void loop();

/**
 * @brief Manages the Bluetooth connection and status LED.
 */
void handleBluetoothConnection();

/**
 * @brief Measures the water level and sends the data and state via BLE.
 * @param forceUpdate If true, forces sending a measurement regardless of interval.
 */
void handleWaterLevel(bool forceUpdate);

/**
 * @brief Controls the pump based on water level.
 *        Shuts off the pump if water level is not in the normal range.
 */
void controlPump();

/**
 * @brief Processes incoming BLE control commands.
 *        Supports "on" and "off" commands for the pump.
 */
void handlePumpCommand();

#endif // MAGIC_FAUCET_FOUNTAIN_H
