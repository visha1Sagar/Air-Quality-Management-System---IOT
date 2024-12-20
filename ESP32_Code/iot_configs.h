/*****************************************************************************************************************************
**********************************    Author  : Ehab Magdy Abdullah                      *************************************
**********************************    Linkedin: https://www.linkedin.com/in/ehabmagdyy/  *************************************
**********************************    Youtube : https://www.youtube.com/@EhabMagdyy      *************************************
******************************************************************************************************************************/

// Enter Your Wifi and Password
#define IOT_CONFIG_WIFI_SSID "Redmi Note 13 Pro"
#define IOT_CONFIG_WIFI_PASSWORD "lotus555"


// Azure IoT Hub
#define IOT_CONFIG_IOTHUB_FQDN "air-quality-monitoring.azure-devices.net"
// Azure IoT Gub Device ID
#define IOT_CONFIG_DEVICE_ID "ESP32"
// Azure IoT Hub Device Key (primary key)
#define IOT_CONFIG_DEVICE_KEY "Fn9KGECzSVxWuaRy/JL0OKQsoIj7HLzoqqwT75HmdTQ="

// Publish 1 message every 5 seconds
#define TELEMETRY_FREQUENCY_MILLISECS 5000
