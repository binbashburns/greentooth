# greentooth
The purpose of Project Greentooth is to add Bluetooth functionality to a LS-671 Loudspeaker-Control Unit.
To achieve this goal, an Adafruit ESP32 Microcontroller and 2.5W Audio Amplifier will be added internally.
All original functionality of the LS-671 Loudspeaker should remain intact.
For security purposes, the attack surface should be minimized by adding ONLY the minimum required functionality. All other services (i.e.: WiFi) should not be enabled on the microcontroller.

## Equipment
- Adafruit ESP32 Feather V2 - 8MB Flash + 2 MB PSRAM - STEMMA QT PID: 5400
- Adafruit Mono 2.5W Class D Audio Amplifier - PAM8302 PID: 2130
- Loudspeaker-Control Unit, LS-671/VRC

## Phase One: Set up Arduino IDE with ESP32 board definitions
Before you can use Arduino IDE to interact with the ESP32 microcontroller, you need to install the appropriate USB to serial drivers and set up the libraries in Arduino IDE. A detailed guide for how to do this can be found at the following links:
- Setting up CircuitPython: https://learn.adafruit.com/adafruit-esp32-feather-v2/circuitpython
- Arduino IDE setup: https://learn.adafruit.com/adafruit-esp32-feather-v2/arduino-ide-setup
- Blink Test: https://learn.adafruit.com/adafruit-esp32-feather-v2/blink

## Phase Two: Physical Connections
- 3V on ESP32 Feather V2 -> VIN on Amp
- GND on ESP32 Feather V2 -> GND on Amp
- GND on ESP32 Feather V2 -> A- on Amp
- A0 on ESP32 Feather V2 -> A+ on Amp
- Negative (-) terminal on Amp -> Negative (-) terminal on LS-671
- Positive (+) terminal on Amp -> Positive (+) terminal on LS-671