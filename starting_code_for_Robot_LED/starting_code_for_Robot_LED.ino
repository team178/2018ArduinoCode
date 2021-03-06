#include <Adafruit_NeoPixel.h>
#include <Wire.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(100, 7, NEO_GRB + NEO_KHZ800);

String myWord = "";
void setup() {
  int x = 0;
  //Wire.begin(8);               
  //Wire.onReceive(readRoborioMessage); 
  //Serial.begin(9600);
  strip.begin();
  strip.show();
  //turnPowerUp();
  //turnFirst();
  //turnSkip();
  //turnPowerCube();
  //turnSkipRed();
  //turnSkipBlue();
  //fakeMethod();
  
  turnAllOff();
  Serial.println("setup");
}

void readRoborioMessage(int howMany) {
  myWord = "";
  while (0 < Wire.available()) {
    char c = Wire.read();
    myWord = myWord + c;
  }
  Serial.println("hello");
  Serial.println(myWord);
  //go to Tools --> Serial Monitor or press Ctrl+Shift+M
}
 
void loop() {
  turnTesting();
}


void turnAllOff() {
  for (int i=0; i<=36; i++){
  strip.setPixelColor(i,0,0,0);
}
  strip.show();
}

void turnRed() {

  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=5){
      strip.setPixelColor(i+x,255,0,0);
      strip.setPixelColor(i+(x-1),255,11,0);
      strip.setPixelColor(i+(x-2),255,22,0);
      strip.setPixelColor(i+(x-3),255,44,0);
      strip.setPixelColor(i+(x-4),255,69,0);   
  
      strip.setPixelColor(i-x,255,0,0);
      strip.setPixelColor(i-(x+1),255,11,0);
      strip.setPixelColor(i-(x+2),255,22,0);
      strip.setPixelColor(i-(x+3),255,44,0);
      strip.setPixelColor(i-(x+4),255,69,0);
      
    } 
    strip.show();
    delay(100);
  }

}

void turnYellow() {
  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=3){
      strip.setPixelColor(i+x,255,255,0);
      strip.setPixelColor(i+(x-1),255,255,0);
      strip.setPixelColor(i+(x-2),255,215,0);
  
      strip.setPixelColor(i-x,255,255,0);
      strip.setPixelColor(i-(x+1),255,255,0);
      strip.setPixelColor(i-(x+2),255,215,0);
    } 
    strip.show();
    delay(100);
  }

}

void turnGreen() {
  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=3){
      strip.setPixelColor(i+x,0,255,0);
      strip.setPixelColor(i+(x-1),0,100,0);
      strip.setPixelColor(i+(x-2),100,255,0);

      strip.setPixelColor(i-x,0,255,0);
      strip.setPixelColor(i-(x+1),0,100,0);
      strip.setPixelColor(i-(x+2),100,255,0);

    } 
    strip.show();
    delay(100);
  }

}

void turnBlue() {
  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=3){
      strip.setPixelColor(i+x,0,0,255);
      strip.setPixelColor(i+(x-1),0,0,255);
      strip.setPixelColor(i+(x-2),0,200,255);
  
      strip.setPixelColor(i-x,0,0,255);
      strip.setPixelColor(i-(x+1),0,0,255);
      strip.setPixelColor(i-(x+2),0,200,255);
      Serial.println("hEY");
    } 
    strip.show();
    delay(100);
  }

}

void turnPeenk() {
  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=3){
      strip.setPixelColor(i+x,255,0,255);
      strip.setPixelColor(i+(x-1),255,0,255);
      strip.setPixelColor(i+(x-2),255,0,100);
  
      strip.setPixelColor(i-x,255,0,255);
      strip.setPixelColor(i-(x+1),255,0,255);
      strip.setPixelColor(i-(x+2),255,0,100);
    } 
    strip.show();
    delay(100);
  }

}

void turnChristmas() {
  for (int i=36; i > 0; i--){
    for(int x= 0; x <=36; x+=4){
      strip.setPixelColor(i+x,255,0,0);
      strip.setPixelColor(i+(x-1),255,0,0);
      strip.setPixelColor(i+(x-2),0,255,0);
      strip.setPixelColor(i+(x-3),0,255,0);
      
      strip.setPixelColor(i-x,255,0,0);
      strip.setPixelColor(i-(x+1),255,0,0);
      strip.setPixelColor(i-(x+2),0,255,0);
      strip.setPixelColor(i-(x+3),0,255,0);
    }  
    strip.show();
    delay(100);   
  }
}

void turnRainbow() {
    for (int i=36; i > 0; i--){
      for(int x= 0; x <=36; x+=6){
        strip.setPixelColor(i+x,255,0,0);
        strip.setPixelColor(i+(x-1),255,165,0);
        strip.setPixelColor(i+(x-2),255,255,0);
        strip.setPixelColor(i+(x-3),0,255,0);
        strip.setPixelColor(i+(x-4),0,0,255);
        strip.setPixelColor(i+(x-5),255,0,255);
        strip.setPixelColor(i-x,255,0,0);
        strip.setPixelColor(i-(x+1),255,165,0);
        strip.setPixelColor(i-(x+2),255,255,0);
        strip.setPixelColor(i-(x+3),0,255,0);
        strip.setPixelColor(i-(x+4),0,0,255);
        strip.setPixelColor(i-(x+5),255,0,255);
      } 
      strip.show();
      delay(100);    
  }
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

void turnCookwareMagnetic() {
 for (int i=36; i > 0; i--){
   for(int x= 0; x <=36; x+=4){
      strip.setPixelColor(i+x,255,55,90);
      strip.setPixelColor(i+(x-1),200,200,0);
      strip.setPixelColor(i+(x-2),0,200,200);
  
      strip.setPixelColor(i-x,255,55,90);
      strip.setPixelColor(i-(x+1),200,200,0);
      strip.setPixelColor(i-(x+2),0,200,200);
   }
   
  strip.show();
  delay(100);
  }
}


void turnPolar() {
  for (int i=35; i > 0; i--){
    for(int x= 0; x <=36; x+=3){
      strip.setPixelColor(i+x,190,0,90);
      strip.setPixelColor(i+(x-1),60,49,110);
      strip.setPixelColor(i+(x-2),0,26,110);
  
      strip.setPixelColor(i-x,190,0,90);
      strip.setPixelColor(i-(x+1),60,49,110);
      strip.setPixelColor(i-(x+2),0,26,110);
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

void turnSteamworks() {
  for(int i=35; i > 0; i--){
    for(int x= 0; x <=36; x+=4){
      strip.setPixelColor(i+x,204,153,51);
      strip.setPixelColor(i+(x-1),186,138,67);
      strip.setPixelColor(i+(x-2),255,255,255);
      strip.setPixelColor(i+(x-3),56,50,47);
//Trevor's Brass - (204,153,51) #CC9933
//Bronze - (98,57,45) #62392D [brighter = (102,51,51) #663333]
//Yellow/Gold idk - (186,138,67) #BA8A43 [brighter = (204,153,51) #CC9933]
//White - (255) #FFFFFF
//Blackish Grey - (56,50,47) #38322F [brighter = (51,51,51) #333333

      strip.setPixelColor(i-x,204,153,51);
      strip.setPixelColor(i-(x+1),186,138,67);
      strip.setPixelColor(i-(x+2),255,255,255);
      strip.setPixelColor(i-(x+3),56,50,47);
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

void blackandwhite() {
  //its just black and white
  for(int i=0;,i<=36;,i+2 ){
  for(int x=0;x<=36;,x++){

    strip.setPixelColor(x,0,0,0);
    strip.setPixelColor(i,255,255,255);
    strip.setPixelColor
    strip.setPixelColor
    strip.setPixelColor
    strip.setPixelColor
    strip.setPixelColor
    strip.show();
  }
  }
    
}

