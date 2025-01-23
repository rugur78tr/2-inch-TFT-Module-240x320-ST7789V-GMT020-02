#include <TFT_eSPI.h> // Library for TFT display
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); // Create TFT object

void setup() {
  // Initialize the display
  tft.init();
  tft.setRotation(1); // Adjust rotation as needed
  tft.fillScreen(TFT_BLACK); // Fill screen with black color
  tft.setTextColor(TFT_WHITE); // Set text color to white
  tft.setTextSize(2); // Set text size
  tft.setCursor(10, 10); // Set cursor position
  tft.println("Hello, World!"); // Print text
}

void loop() {
  // Do nothing here
}