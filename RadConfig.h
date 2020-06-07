#pragma once

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <RadLED.h>


class RadConfig {
    public:
        RadConfig();
        void log(String msg);
        void debug(String msg);
        void debug_on();
        void debug_off();

        const char* wifi_ssid = "<WIFI SSID>";
        const char* wifi_password = "<WIFI PASSWORD>";
        const char* thingspeak_api_key = "<THINGSPEAK APIKEY>";
        const char* mqtt_server = "<MQTT HOSTNAME OR IP>";
        const char* mqtt_username = "<MQTT USERNAME>";
        const char* mqtt_password = "<MQTT PASSWORD>";
        int mqtt_port = 1883;

        int serial_speed = 115200;

        unsigned long heartbeat_ms = 10000;

        int restart_after_failed_wifi_attempts = 100;

        String device_id = "";

        IPAddress& gateway_ip();
        uint8_t gateway[4] = {192, 168, 100, 1};

        RadLED led;

    private:
        bool _debug = false;
}
