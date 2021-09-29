void knightRider(int red, int green, int blue, int ridingWidth, int delayDuration, int returnDelayDuration){
  for(int i = 0; i < (NUM_LEDS - ridingWidth - 2); i++) {
    FastLED.clear();
    FastLED.show();
    leds[i].setRGB(red/10, green/10, blue/10);
    for(int j = 1; j <= ridingWidth; j++) {
      leds[i + j].setRGB(red, green, blue);
    }
    leds[i + ridingWidth + 1].setRGB(red/10, green/10, blue/10);
    FastLED.show();
    delay(delayDuration);
  }

  delay(returnDelayDuration);

  for(int i = (NUM_LEDS - ridingWidth - 2); i > 0; i--) {
    FastLED.clear();
    FastLED.show();
    leds[i].setRGB(red/10, green/10, blue/10);
    for(int j = 1; j <= ridingWidth; j++) {
      leds[i + j].setRGB(red, green, blue);
    }
    leds[i + ridingWidth + 1].setRGB(red/10, green/10, blue/10);
    FastLED.show();
    delay(delayDuration);
  }
 
  delay(returnDelayDuration);
}
