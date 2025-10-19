#include <Arduino.h>
#include <Adafruit_NeoPixel.h>


#define PIN        8
#define NUMPIXELS 16
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 20

// put function declarations here:


void setup() {
  // put your setup code here, to run once:

  pixels.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  pixels.clear();

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(150, 0, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  
    for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(100, 50, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(75, 75, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(50, 100, 0));
    pixels.show();
    delay(DELAYVAL);
  }

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 150, 0));
    pixels.show();
    delay(DELAYVAL);
  }
  
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 100, 50));
    pixels.show();
    delay(DELAYVAL);
  }

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 75, 75));
    pixels.show();
    delay(DELAYVAL);
  }
  
    for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 50, 100));
    pixels.show();
    delay(DELAYVAL);
  }

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 150));
    pixels.show();
    
  }
  
  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(50, 0, 100));
    pixels.show();
    delay(DELAYVAL);
  }

  for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(75, 0, 75));
    pixels.show();
    delay(DELAYVAL);
  }

    for(int i=0; i<NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(100, 0, 50));
    pixels.show();
    delay(DELAYVAL);
  }
  
  
}

// put function definitions here:


//pseudocode
//read microwave data


//1.
//create json objects to store the data
//"occupied": yes
//post json to our API - let software take it from there

//2. (could be at the same time or we could read the json that just got created)
//if occupied
//  turn the light red (change red pwm to 100 and the others to 0)
//else if available
//  turn the light green (green duty cycle)
//else if cleaning ****for the cleaning should we do this as a schedule (we take info from the API that it's scheduled for maintenance)?
//  turn yellow (red 50, green 50)



