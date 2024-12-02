# Troubleshooting Guide

This troubleshooting guide will help you resolve common issues you might encounter while setting up and running the Automated Plant Watering System with ESP32 and ThingSpeak.

## Common Issues and Solutions

### 1. ESP32 Not Connecting to WiFi
**Symptoms**: The ESP32 fails to connect to the WiFi network. Serial Monitor shows repeated connection attempts.

**Solutions**:
- **Check Credentials**: Ensure that the SSID and password in the code match your WiFi network’s credentials.
- **Signal Strength**: Ensure the ESP32 is within range of the WiFi router.
- **WiFi Channel**: Make sure your WiFi network is not on a very crowded channel.
- **Restart Router**: Restart your WiFi router.

### 2. Failed to Upload Code to ESP32
**Symptoms**: The upload process in the Arduino IDE fails, showing an error message.

**Solutions**:
- **Boot Mode**: Hold the `Boot` button on the ESP32 while the code is uploading, and release it when the upload starts.
- **USB Cable**: Ensure you are using a working USB cable.
- **Driver Installation**: Verify that you have the correct drivers installed for the ESP32. You can download them from the manufacturer's website.
- **Select Correct Board**: Ensure the correct board and port are selected in `Tools > Board` and `Tools > Port`.

### 3. Sensors Not Reading Correctly
**Symptoms**: Sensor values appear incorrect or do not change.

**Solutions**:
- **Connections**: Verify all connections are secure and correct according to the wiring instructions.
- **Power Supply**: Ensure the sensors and ESP32 are receiving adequate power.
- **Test Individually**: Test each sensor individually with simple test sketches to ensure they are functioning.

### 4. Data Not Appearing on ThingSpeak
**Symptoms**: No data appears on ThingSpeak channel despite the ESP32 sending data.

**Solutions**:
- **API Key**: Ensure the correct Write API Key is used in the code.
- **Channel Settings**: Verify that the fields in ThingSpeak channel settings match those used in the code.
- **Internet Connection**: Check that the ESP32 has a stable internet connection.

### 5. MATLAB Visualizations Not Updating
**Symptoms**: MATLAB visualizations on ThingSpeak do not show new data.

**Solutions**:
- **Data Points**: Ensure the number of data points retrieved in the MATLAB script is sufficient to include the latest data.
- **Script Execution**: Verify that the MATLAB script executes without errors.
- **Time Zone**: Check that the timestamps match your time zone settings in ThingSpeak.

## Contact and Support
If you continue to experience issues, you can seek help by:
- Posting a question in the [ThingSpeak Community Forum](https://community.thingspeak.com/).
- Checking the [Arduino Forum](https://forum.arduino.cc/).
- Reviewing the official documentation for [ESP32](https://docs.espressif.com/projects/esp-idf/en/latest/) and [ThingSpeak](https://www.mathworks.com/help/thingspeak/).

### Additional Resources
- [ThingSpeak Documentation](https://www.mathworks.com/help/thingspeak/)
- [Arduino IDE Documentation](https://www.arduino.cc/en/guide/homepage)
- [ESP32 Troubleshooting Guide](https://docs.espressif.com/projects/esp-idf/en/latest/troubleshooting.html)

By following this guide, you should be able to resolve most common issues with your automated plant watering system. If you encounter any unique problems or need further assistance, feel free to seek support from the resources listed above.
