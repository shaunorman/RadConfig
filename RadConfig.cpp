#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <RadConfig.h>

IPAddress& RadConfig::gateway_ip() {
    IPAddress gw(gateway[0], gateway[1], gateway[2], gateway[3]);
    return gw;
}
