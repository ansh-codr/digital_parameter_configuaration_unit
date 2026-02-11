#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define Screen_Width 128
#define Screen_Height 64
#define OLED_ASSR 0x3C
Adafruit_SSD1306 display(Screen_Width, Screen_Height, &Wire, -1);
void setup() {
// write your initialization code here
}

void loop() {
// write your code here
}