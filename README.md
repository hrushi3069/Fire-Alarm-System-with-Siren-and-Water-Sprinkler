# Fire Alarm System with Automatic Water Sprinkler

## Overview

This project is an Arduino-based fire detection system that detects flames using a flame sensor. Once fire is detected, the system activates a buzzer and automatically turns on a water sprinkler after a short delay.

## Features

- Fire detection using flame sensor
- Audible alarm
- Automatic water sprinkler
- Low-cost hardware
- Arduino-based control

## Hardware

- Arduino Uno
- Flame Sensor
- Relay Module
- DC Water Pump
- Buzzer
- Breadboard
- Jumper Wires

## Software

- Arduino IDE
- Embedded C/C++

## Working

The Fire Alarm System continuously monitors the environment using a flame sensor connected to the Arduino Uno.

1. **System Initialization**
   - The Arduino configures the flame sensor as an input.
   - The buzzer and relay module are configured as outputs.
   - The relay remains OFF and the buzzer is silent during normal operation.

2. **Fire Detection**
   - The flame sensor continuously checks for the presence of a flame.
   - When a flame is detected, the sensor sends a LOW signal to the Arduino.

3. **Alarm Activation**
   - As soon as a flame is detected, the Arduino immediately activates the buzzer.

4. **Sprinkler Delay**
   - The Arduino starts a 5-second timer using the `millis()` function.
   - If the flame remains detected for 5 seconds, the relay is activated.

5. **Water Sprinkler Activation**
   - The relay turns ON the water pump.
   - The pump sprays water to help suppress the fire.

6. **System Reset**
   - When no flame is detected, the buzzer turns OFF.
   - The relay switches OFF the water pump.
   - The timer is reset and the system continues monitoring.

## Images

### Prototype

![Prototype](images/Prototype.png)

### Circuit Diagram

![Circuit Diagram](images/Circuit%20Diagram.png)

### Block Diagram

![Block Diagram](images/Block%20Diagram.png)

## Future Improvements

- GSM alerts
- Wi-Fi notifications
- Temperature sensor
- Smoke sensor
- Mobile application

## Author

Hrushikesh Pandurang Dunde
