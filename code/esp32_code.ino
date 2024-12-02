#include <WiFi.h> // WiFi library for ESP32
#include <ThingSpeak.h> // ThingSpeak library for sending data to the cloud

// Pin Definitions
#define MOISTURE_PIN 34 // Soil Moisture Sensor (analog input)
#define WATER_LEVEL_PIN 19 // Water Level Sensor (digital input)
#define RELAY_PIN 18 // Relay control pin for water pump
#define TEMPERATURE_PIN 23 // Temperature Sensor (analog input)

// ThingSpeak Configuration
unsigned long channelID = YOUR_CHANNEL_ID; // Replace with your ThingSpeak Channel ID
const char *writeAPIKey = "YOUR_WRITE_API_KEY"; // Replace with your ThingSpeak Write API Key

// WiFi Configuration
const char *ssid = "YOUR_WIFI_SSID"; // Your WiFi SSID
const char *password = "YOUR_WIFI_PASSWORD"; // Your WiFi Password

WiFiClient client;

void setup() 
{
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Pin Setup
  pinMode(MOISTURE_PIN, INPUT);
  pinMode(WATER_LEVEL_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(TEMPERATURE_PIN, INPUT);
  
  // Connect to WiFi
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialize ThingSpeak
  ThingSpeak.begin(client);
}

void loop() 
{
  // Read sensor values
  int moistureLevel = analogRead(MOISTURE_PIN);
  int waterLevel = digitalRead(WATER_LEVEL_PIN);
  int temperatureValue = analogRead(TEMPERATURE_PIN);
  
  // Send data to ThingSpeak
  ThingSpeak.setField(1, moistureLevel);
  ThingSpeak.setField(2, waterLevel);
  ThingSpeak.setField(3, 1); // Example value for watering status
  ThingSpeak.setField(4, 1.0); // Example value for water usage
  ThingSpeak.setField(5, millis() / 1000); // Current timestamp in seconds
  ThingSpeak.setField(6, waterLevel == 0 ? 1 : 0); // Example value for water level alert
  ThingSpeak.setField(7, temperatureValue);
  
  ThingSpeak.writeFields(channelID, writeAPIKey);

  // Add a delay before the next loop iteration
  delay(10000); // 10-second delay
}
