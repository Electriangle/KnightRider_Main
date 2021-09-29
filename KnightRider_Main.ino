#include "FastLED.h"

#define NUM_LEDS  150    // Enter the total number of LEDs on the strip
#define PIN       7      // The pin connected to Din to control the LEDs

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1500);    // Set power limit of LED strip to 5V, 1500mA
  FastLED.clear();                                    // Initialize all LEDs to "off"
}

void loop() {
  knightRider(255, 0, 0, 5, 10, 50);
  knightRider(0, 255, 0, 5, 10, 50);
  knightRider(0, 0, 255, 5, 10, 50);
}
