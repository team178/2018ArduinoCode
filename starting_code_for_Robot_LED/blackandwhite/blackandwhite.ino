#include <Adafruit_NeoPixel.h>
#include <Wire.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(100, 7, NEO_GRB + NEO_KHZ800);

void setup() 
{ 
  
}

void loop()
{
  blackandwhite();
}

void blackandwhite()
{
  strip.begin();
  strip.show();
  int x =0;
  //its just black and white
  for(int i=0; i<=36; i=i+2 )
  {
    for(int x=0; x<=36; x++)
    {
      strip.setPixelColor(x,0,0,0);
      strip.setPixelColor(i,255,255,255);
      strip.show();
    }
  }
}  //end of blackandwhite

  
  
  
  
