#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define Screen_Width 128
#define Screen_Height 64
#define OLED_ADDR 0x3C
Adafruit_SSD1306 display(Screen_Width, Screen_Height, &Wire, -1);

void setup() {
    // write your initialization code here
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
        Serial.println(F("OLED not found"));
        while (true);
    }
    //Clear Display
    display.clearDisplay();
    //Set Text Size
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    //Display Text
    display.setCursor(0, 0);
    display.println("Arduino UNO R4");
    display.println("OLED with I2C");
    display.println("Hello Students!");
    // Show on Screen
    display.display();
}

void loop() {
    // write your code here
}
