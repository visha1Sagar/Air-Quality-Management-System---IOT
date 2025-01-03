

// Enter Your Wifi and Password
#define IOT_CONFIG_WIFI_SSID ""
#define IOT_CONFIG_WIFI_PASSWORD ""


// Azure IoT Hub
#define IOT_CONFIG_IOTHUB_FQDN "air-quality-monitoring.azure-devices.net"
// Azure IoT Gub Device ID
#define IOT_CONFIG_DEVICE_ID "ESP32"
// Azure IoT Hub Device Key (primary key)
#define IOT_CONFIG_DEVICE_KEY ""

// Publish 1 message every 2 minutes
#define TELEMETRY_FREQUENCY_MILLISECS 120000

// Sense values every 30 seconds
#define DATA_COLLECTION_INTERVAL_MILLISECS 30000