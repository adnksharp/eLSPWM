#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#include "password.hpp"
#include "oled.hpp"
#include "SC.hpp"
#include "html.hpp"

ESP8266WebServer server(80);
Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup()
{
    const char *headerkeys[] = {"User-Agent", "Cookie"};
    size_t headerkeyssize = sizeof(headerkeys) / sizeof(char *);

    Serial.begin(115200);

    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    printDisplay(true, 0, 0, "");

    WiFi.begin(ssid(), passw());
    while (WiFi.status() != WL_CONNECTED)
        delay(500);
    printDisplay(false, 0, 0, "Red: " + ssid());
    printDisplay(false, 0, 16, "IP: " + WiFi.localIP().toString());

    server.on("/", Hroot);
    server.on("/pwm", Hroot);
    server.on("/login", Hlogin);
    server.collectHeaders(headerkeys, headerkeyssize);
    server.begin();
    printDisplay(false, 0, 32, "Servidor iniciado");
    server.onNotFound(H404);
}

void loop()
{
    server.handleClient();
}