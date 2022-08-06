#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#include "password.hpp"
#include "oled.hpp"
#include "SC.hpp"

void setup()
{
    Serial.begin(115200);

    setOLED();
    printDisplay(true, 0, 0, "Iniciando...");

    WiFi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
        delay(5000);
    printDisplay(true, 0, 0, "Red: " + ssid());
    printDisplay(false, 0, 16, "IP: " + WiFi.localIP().toString());

    serverBegin();
    printDisplay(false, 0, 32, "Servidor iniciado");
    server.onNotFound(H404);
}

void loop()
{
    server.handleClient();
}