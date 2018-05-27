#pragma once

#include <Arduino.h>
#include <ESP8266WiFi.h>


class RadConfig {
    public:
        const char* wifi_ssid = "<WIFI SSID>";
        const char* wifi_password = "<WIFI PASSWORD>";
        const char* thingspeak_api_key = "<THINGSPEAK APIKEY>";
        const char* mqtt_server = "<MQTT HOSTNAME OR IP>";
        const char* mqtt_username = "<MQTT USERNAME>";
        const char* mqtt_password = "<MQTT PASSWORD>";
        int mqtt_port = 1883;

        IPAddress& gateway_ip();
        uint8_t gateway[4] = {192, 168, 1, 1};
        int ip_start = 100;

        int led_pin = LED_BUILTIN;
};