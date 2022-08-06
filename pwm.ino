#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#include "password.hpp"
#include "oled.hpp"

ESP8266WebServer server(80);
Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup()
{
    Serial.begin(115200);
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    printDisplay(true, 0, 0, "");
}

void loop()
{
    server.handleClient();
}