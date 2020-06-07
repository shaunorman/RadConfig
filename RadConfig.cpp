#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <RadConfig.h>
#include <RadDevice.h>
#include <RadLED.h>

RadConfig::RadConfig() {
    device_id = get_device_id();
    led = RadLED();
}

IPAddress& RadConfig::gateway_ip() {
    IPAddress gw(gateway[0], gateway[1], gateway[2], gateway[3]);
    return gw;
}

void RadConfig::log(String msg) {
    Serial.println(msg);
}

void RadConfig::debug(String msg) {
    if (_debug) {
        Serial.println(msg);
    }
}

void RadConfig::debug_on() {
    _debug = true;
}

void RadConfig::debug_off() {
    _debug = false;
}
