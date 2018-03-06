#include <Adafruit_NeoPixel.h>
#include <Wire.h>
 int numberOfPixels = 35;
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numberOfPixels, 7, NEO_GRB + NEO_KHZ800);

 char letter;
 char incoming;
 int brightness = 70;

void setup()
{
   strip.begin();
   strip.show();
   Serial.begin(9600);      // bauds, bytes per second 
} //END OF SETUP

/*
 * climb - u
collect cube - c
scale - s
switch - h
red alliance - r
blue alliance - b

 */
void loop()
{
 
  if(Serial.available() > 0) 
  {
    letter = Serial.read(); 

    if(letter == 'o')
    {
      Serial.println("hello"); 
    }

    if(letter == 'c')
    {
      dankRed();  
    }
    if(letter == 'b')
    {
      dankBlue();  
    }
    if(letter == 'p')
    {
      powerCubeChaser();  
    }
    
  }
 }


void dankRed()
{
 for(int b= 200; b >= 10; b-= 10)
{

 for(int x= 0; x <=numberOfPixels; x++)
  {
   strip.setBrightness(b);
   strip.setPixelColor(x,255,0,0);
   strip.show(); 
  }
 delay(100);
}







void turnEnforcers() {
  // enforcers Colors:
 for (int i=36; i > 0; i--){
   for(int x= 0; x <=36; x+=4){
      strip.setPixelColor(i+x,229,187,0);
      strip.setPixelColor(i+(x-1),229,187,0);
      strip.setPixelColor(i+(x-2),7,16,79);
      strip.setPixelColor(i+(x-3),7,16,79);
  
      strip.setPixelColor(i-x,229,187,0);
      strip.setPixelColor(i-(x+1),229,187,0);
      strip.setPixelColor(i-(x+2),7,16,99);
      strip.setPixelColor(i-(x+3),7,16,99);
   }
   
  strip.show();
  delay(100);
  }
}

void turnFirst() {
  for (int i=35; i > 0; i--){
    for(int x= 0; x <=36; x+=4){
      strip.setPixelColor(i+x,237,28,36);
      strip.setPixelColor(i+(x-1),0,101,179);
      strip.setPixelColor(i+(x-2),35,31,32);
      strip.setPixelColor(i+(x-3),167,169,172);
  
      strip.setPixelColor(i-x,237,28,36);
      strip.setPixelColor(i-(x+1),0,101,179);
      strip.setPixelColor(i-(x+2),35,31,32);
      strip.setPixelColor(i-(x+3),167,169,172);
    } 
    strip.show();
    delay(100);
  }
}

void turnBlueAndGold() {
  for (int i=35; i > 0; i--){
    for(int x= 0; x <=36; x+=6){
      strip.setPixelColor(i+x,15,8,56);
      strip.setPixelColor(i+(x-1),7,16,79);
      strip.setPixelColor(i+(x-2),2,5,121);
      strip.setPixelColor(i+(x-3),255,208,0);
      strip.setPixelColor(i+(x-4),229,187,0);
      strip.setPixelColor(i+(x-5),255,222,76);
//Enforcer Blue 3.0 - (15,8,56)
//Secondary Blue - (7,16,79)
//Accent Blue - (2,5,121)
//Enforcer Gold 3.0 - (255,208,0)
//Secondary Gold - (229,187,0)
//Accent Gold - (255,222,76)
      strip.setPixelColor(i-x,15,8,56);
      strip.setPixelColor(i-(x+1),7,16,79);
      strip.setPixelColor(i-(x+2),2,5,121);
      strip.setPixelColor(i-(x+3),255,208,0);
      strip.setPixelColor(i-(x+4),229,187,0);
      strip.setPixelColor(i-(x+5),255,222,76);
    } 
    strip.show();
    delay(100);
  }
}

void turnPowerUp()  {
    

      for(int i=3; i > 0; i--){
        for(int x= 0; x <=36; x+=4){
          strip.setPixelColor(i+x,232,28,37);//red
          strip.setPixelColor(i+(x-1),0,161,210);//blue
          strip.setPixelColor(i+(x-2),255,255,255);//white
          strip.setPixelColor(i+(x-3),254,205,7);//yellow
    
          strip.setPixelColor(i-x,232,28,37);//red
          strip.setPixelColor(i-(x+1),0,161,210);//blue
          strip.setPixelColor(i-(x+2),255,255,255);//white
          strip.setPixelColor(i-(x+3),254,205,7);//yellow
          strip.show();
          delay(100);
        }

      }

}
void turnPowerCube() {
    
    for (int i = 0; i < 36; i++)
    {
      strip.setPixelColor(i,254,205,7);
      strip.show();
      delay(100);
    }
    
       }
void turnTesting()  {
    //Yo this gonna be them lights tho. Theys is gon be hella bright.
    // int x = 0;
     //for(int i=0; i < 72; i++){
    //for(int i=0; i < 100; i++){
      int i = 0;
      //either i or x stays same when lights not moving
      
      for(int x= 0; x <= 100; x+=4){
        //x+=3;
        strip.setPixelColor(i+x,232,28,37);//red
        strip.setPixelColor(i+(x-1),0,161,210);//blue
        strip.setPixelColor(i+(x-2),255,255,255);//white
        strip.setPixelColor(i+(x-3),254,205,7);//yellow
  
        strip.setPixelColor(i-x,232,28,37);//red
        strip.setPixelColor(i-(x+1),0,161,210);//blue
        strip.setPixelColor(i-(x+2),255,255,255);//white
        strip.setPixelColor(i-(x+3),254,205,7);//yellow
        strip.show();
        delay(100);
        /*
        for(int i=37; i < 100; i++){
          //force is pulsing alliance color
          //levatiate should be scale colors
          //boost is chase  
        }*/
      }
      
    //}
}
void turnSkip()  {
  
  for(int i=5; i > 0; i--){
        for(int x= 0; x <= 37; x+=4){
          strip.setPixelColor(i+x,232,28,37);//red
          strip.setPixelColor(i+(x-1),0,0,0);//blank
          strip.setPixelColor(i+(x-2),0,161,210);//blue
          strip.setPixelColor(i+(x-3),0,0,0);//blank
          
          strip.setPixelColor(i-x,232,28,37);//red
          strip.setPixelColor(i+(x-1),0,0,0);//blank
          strip.setPixelColor(i-(x+2),0,161,210);//blue
          strip.setPixelColor(i+(x-3),0,0,0);//blank
          strip.show();
          delay(100);
        }
  }
}

void turnSkipRed()
{
    for(int i=10; i > 0; i--){
        for(int x= 0; x <= 37; x+=4){
          strip.setPixelColor(i+x,232,28,37);//red
          strip.setPixelColor(i+(x-1),0,0,0);//blank
          strip.setPixelColor(i+(x-2),232,28,37);//red
          strip.setPixelColor(i+(x-3),0,0,0);//blank
          
          strip.setPixelColor(i-x,232,28,37);//red
          strip.setPixelColor(i+(x-1),0,0,0);//blank
          strip.setPixelColor(i-(x+2),232,28,37);//red
          strip.setPixelColor(i+(x-3),0,0,0);//blank
          strip.show();
          delay(100);
        }
    }
}

void turnSkipBlue()
{
    for(int i=10; i > 0; i--){
        for(int x= 0; x <= 37; x+=4){
      strip.setPixelColor(i+x,0,161,210);//blue
      strip.setPixelColor(i+(x-1),0,0,0);//blank
      strip.setPixelColor(i+(x-2),0,161,210);//blue
      strip.setPixelColor(i+(x-3),0,0,0);//blank
      
      strip.setPixelColor(i-x,0,161,210);//blue
      strip.setPixelColor(i+(x-1),0,0,0);//blank
      strip.setPixelColor(i-(x+2),0,161,210);//blue
      strip.setPixelColor(i+(x-3),0,0,0);//blank
      strip.show();
      delay(100);
      }
}

}


void turnPulseBlue() {
  for(int i=0; i <= 36; i++){
    for(int x= 0; x <= 36; x+=12){
      strip.setPixelColor(i,0,0,255);//white
      strip.setPixelColor(i-6,0,0,0);//white
      strip.setPixelColor(i - x,0,0,255);//white
      strip.setPixelColor(i-6-x,0,0,0);//white
      strip.setPixelColor(i,0,0,255);//white
      strip.setPixelColor(i+6,0,0,0);//white
      strip.setPixelColor(i + x,0,0,255);//white
      strip.setPixelColor(i+6+x,0,0,0);//white
      strip.show();
      delay(10);
    }
  }

}

void turnPulseRed() {
  for(int i=0; i <= 36; i++){
    for(int x= 0; x <= 36; x+=12){
      strip.setPixelColor(i,255,0,0);//white
      strip.setPixelColor(i-6,0,0,0);//white
      strip.setPixelColor(i - x,255,0,0);//white
      strip.setPixelColor(i-6-x,0,0,0);//white
      strip.setPixelColor(i,255,0,0);//white
      strip.setPixelColor(i+6,0,0,0);//white
      strip.setPixelColor(i + x,255,0,0);//white
      strip.setPixelColor(i+6+x,0,0,0);//white
      strip.show();
      delay(10);
    }
  }

}
for(int b = 10; b <= 200; b+= 10)
{

 for(int x= 0; x <=numberOfPixels; x++)
  {
   strip.setBrightness(b);
   strip.setPixelColor(x,255,0,0);
   strip.show(); 
  }
 delay(100);
}
}

void dankBlue()
{
for(int b= 200; b >= 10; b-= 10)
{

 for(int x= 0; x <=numberOfPixels; x++)
  {
   strip.setBrightness(b);
   strip.setPixelColor(x,23, 89, 196);
   strip.show(); 
  }
 delay(100);
}


for(int b = 10; b <= 200; b+= 10)
{

 for(int x= 0; x <=numberOfPixels; x++)
  {
   strip.setBrightness(b);
   strip.setPixelColor(x,23, 89, 196);
   strip.show(); 
  }
 delay(100);
}
}



void powerCubeChaser()
{
  for(int i = 0 ; i<=numberOfPixels; i++)
  {
  for(int x = 0; x<=numberOfPixels;x+=6)
  {
  strip.setPixelColor(i ,255, 238, 0);
  strip.setPixelColor(i - x,0,0,0);
  strip.setPixelColor(i - (x*2),255, 238, 0);
  strip.setPixelColor(i - (x*3),0,0,0);
 
  strip.show(); 
  }
  }
 
  strip.show(); 
}




/* for(int i = numberOfPixels; i>0; i--)
  {
  for(int x = 0; x<=numberOfPixels,x+= )
  {
  strip.setPixelColor(i + (x-1),0, 21, 56);
  strip.setPixelColor(i + (x-2),255,215,0);
  strip.show(); 
  }
  }
 */



 




    
