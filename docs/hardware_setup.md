# Hardware Setup

## Components Needed
- ESP32 Development Board
- Soil Moisture Sensor (analog)
- Water Level Sensor (digital)
- Temperature Sensor (analog)
- Relay Module
- Water Pump
- Connecting Wires
- Breadboard or PCB

## Circuit Diagram
![Circuit Diagram](../images/circuit_diagram.png)

## Wiring Instructions
1. **Soil Moisture Sensor**:
   - Connect VCC to 3.3V on the ESP32.
   - Connect GND to GND on the ESP32.
   - Connect the signal pin to GPIO 34 (analog input).

2. **Water Level Sensor**:
   - Connect VCC to 3.3V on the ESP32.
   - Connect GND to GND on the ESP32.
   - Connect the signal pin to GPIO 19 (digital input).

3. **Temperature Sensor**:
   - Connect VCC to 3.3V on the ESP32.
   - Connect GND to GND on the ESP32.
   - Connect the signal pin to GPIO 23 (analog input).

4. **Relay Module**:
   - Connect VCC to 3.3V on the ESP32.
   - Connect GND to GND on the ESP32.
   - Connect the IN pin to GPIO 18 (digital output).
   - Connect the relay output to the water pump.

5. **Water Pump**:
   - Connect to the relay module output.
   - Ensure proper power supply for the water pump.

## Assembly
- Assemble the components on a breadboard or PCB as per the circuit diagram.
- Double-check all connections before powering up the system.
