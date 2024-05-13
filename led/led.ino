#include <FastLED.h>

///////////////////////////////////////
/// Testing LED strip code
/// Philip Janik
///
/// May 12, 2024
///////////////////////////////////////

#define NUM_LEDS 150    // 30 LEDs / meter w/ 5m = 150 LEDs total
#define DATA_PIN 6      // PWM is for pin 6
#define CHIPSET WS2812B // internal chipset (inside LED enclosure
#define COLOR_ORDER GRB // WS2812B has a color order of GRB idk why
#define BRIGHTNESS 15   // 0x00 to 0xFF

// the array of colors representing each LED
CRGB leds[NUM_LEDS];

void setup()
{
  // put your setup code here, to run once:
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);

  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

void loop()
{
  static unsigned char r;

  // put your main code here, to run repeatedly:
  FastLED.clear();

  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CRGB(255, 0, 0);

    delay(10);
    FastLED.show();
  }

  delay(1000);
}
