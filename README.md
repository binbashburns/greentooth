# greentooth
The purpose of Project Greentooth is to add Bluetooth functionality to a LS-671 Loudspeaker-Control Unit.
To achieve this goal, an Adafruit ESP32 Microcontroller and 2.5W Audio Amplifier will be added internally.
All original functionality of the LS-671 Loudspeaker should remain intact.
For security purposes, the attack surface should be minimized by adding ONLY the minimum required functionality. All other services (i.e.: WiFi) should not be enabled on the microcontroller.

## Equipment
- Adafruit ESP32 Feather V2 - 8MB Flash + 2 MB PSRAM - STEMMA QT PID: 5400
- Adafruit Mono 2.5W Class D Audio Amplifier - PAM8302 PID: 2130
- Loudspeaker-Control Unit, LS-671/VRC