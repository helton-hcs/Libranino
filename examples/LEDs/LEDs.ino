#include <LED.h>
#include <FadeLED.h>
#include <ToggleLED.h>
#include <FlashLED.h>

FadeLED fadeInLED(11);
FadeLED fadeOutLED(10);
FadeLED fadeInOutLED(9);
ToggleLED toggleLED(6);
FlashLED flashLED(5);

void setup() {
    fadeInLED.begin(FadeType::FADE_IN, 250, 5);
    fadeOutLED.begin(FadeType::FADE_OUT, 250, 5);
    fadeInOutLED.begin(FadeType::FADE_IN_OUT, 250, 5);
    toggleLED.begin(250);
    flashLED.begin(100, 300);
}

void loop() {
    fadeInLED.update();
    fadeOutLED.update();
    fadeInOutLED.update();
    toggleLED.update();
    flashLED.update();
}
