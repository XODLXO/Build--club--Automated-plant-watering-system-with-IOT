# Build--club--Automated-plant-watering-system-with-IOT

## Introduction
This project demonstrates an automated plant watering system using an ESP32 microcontroller, various sensors, and ThingSpeak for data visualization. The system monitors soil moisture, water level, and temperature, and automates the watering process based on real-time data.

## Features
- Real-time monitoring of soil moisture, water level, and temperature.
- Automated watering when soil moisture is low and water level is sufficient.
- Data visualization on ThingSpeak using MATLAB scripts.
- Alerts for low water levels.

## Hardware Components
- ESP32 Development Board
- Soil Moisture Sensor
- Water Level Sensor
- Temperature Sensor
- Relay Module
- Water Pump
- WiFi Network

## Software Components
- Arduino IDE
- ThingSpeak Account
- MATLAB for Visualizations

## Setup Instructions
1. [Hardware Setup](hardware_setup.md)
2. [Software Setup](software_setup.md)

## Usage
1. Connect the hardware components as described in the [hardware setup](hardware_setup.md) guide.
2. Upload the [Arduino code](../code/esp32_code.ino) to your ESP32.
3. Configure ThingSpeak to visualize the data using the [MATLAB scripts](../code/visualization.m).

## Troubleshooting
Refer to the [troubleshooting guide](troubleshooting.md) for common issues and their solutions.

## License
This project is licensed under the MIT License. See the [LICENSE](../LICENSE) file for details.
