void printDisplay(bool clear, int x, int y, String text)
{
    if (clear)
        display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(x, y);
    display.println(text);
    display.display();
}