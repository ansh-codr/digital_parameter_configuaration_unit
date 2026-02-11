# OLED I2C Demo

Project to display text on an SSD1306 128x64 I2C OLED using an Arduino UNO R4.

## Checkpoints

1. IDE
    - `CLion`

2. IDE Version
    - `CLion 2025.3.2`

3. Code
    - Main source: `src/main.cpp`
    - Purpose: initialize the SSD1306 over I2C and print a few text lines to the display.

4. Libraries
    - `Wire`
    - `Adafruit_GFX` (header: `Adafruit_GFX.h`)
    - `Adafruit_SSD1306` (header: `Adafruit_SSD1306.h`)

5. Dependencies
    - Arduino core for `Arduino UNO R4`
    - I2C/TWI support
    - Adafruit GFX and SSD1306 libraries (install via Arduino Library Manager or PlatformIO)
    - C++ compiler and Arduino toolchain integrated into CLion (or use Arduino CLI)

6. Components that we use with oled
    - `Arduino UNO R4` (microcontroller board)
    - `SSD1306 128x64 OLED` module (I2C)
