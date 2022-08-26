Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setOLED()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    display.clearDisplay();
    display.display();
}

void printDisplay(bool clear, int x, int y, String text)
{
    if (clear)
        display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(x, y);
    display.println(text);
    display.display();
}