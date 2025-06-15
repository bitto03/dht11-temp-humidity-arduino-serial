# dht11-temp-humidity-arduino-serial
# DHT11 Temperature and Humidity Serial Monitor

This project reads temperature and humidity data from a DHT11 sensor using an Arduino and displays the values in the Serial Monitor.

## Project Description

The DHT11 is a basic, low-cost digital temperature and humidity sensor. It uses a capacitive humidity sensor and a thermistor to measure the surrounding air and sends the data to a digital pin on the Arduino.

This sketch reads data from the DHT11 sensor and prints the temperature and humidity values to the Serial Monitor every 2 seconds.

## Components Required

- Arduino Uno/Nano/Compatible Board
- DHT11 Temperature and Humidity Sensor
- Jumper Wires
- Breadboard (optional)

## Circuit Diagram

DHT11 Sensor to Arduino Connections:

- VCC to 5V
- GND to GND
- DATA to Digital Pin 2

(Optional: Add a 10k Ohm pull-up resistor between DATA and VCC)

## Library Installation

1. Open the Arduino IDE
2. Go to Sketch > Include Library > Manage Libraries
3. Search for "DHT sensor library"
4. Install "DHT sensor library" by Adafruit
5. The "Adafruit Unified Sensor" library will also be installed automatically

## How to Use

1. Connect the DHT11 sensor to your Arduino as described above
2. Upload the Arduino sketch to your board
3. Open the Serial Monitor (Ctrl + Shift + M) and set the baud rate to 9600
4. You will see temperature and humidity data printed every 2 seconds

## Author

Developed by BHB  (Basirul Hasin )for learning and experimentation.
