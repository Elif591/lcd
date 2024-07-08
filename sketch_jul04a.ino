#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>
#define U8X8_HAVE_HW_SPI

U8G2_KS0108_ERM19264_1 u8g2(U8G2_R0, 5, 6, 7, 8, 9, 10, 11, 12, 4, 2, 13, A1, A2, A0);

void setup(void) {
  pinMode(3, OUTPUT);
  digitalWrite(3, 0);
  u8g2.begin();  
}

void loop(void) {
  u8g2.firstPage();
  do 
    {
    u8g2.setFont(u8g2_font_cu12_t_greek);
    u8g2.drawUTF8(0,12,"Καλησπέρα - ΚΑΛΗΣΠΕΡΑ");
    u8g2.setFont(u8g2_font_unifont_t_greek);
    u8g2.drawUTF8(0,30,"Καλησπέρα - ΚΑΛΗΣΠΕΡΑ");
    u8g2.setFont(u8g2_font_10x20_t_greek);
    u8g2.drawUTF8(0,50,"Καλησπέρα-ΚΑΛΗΣΠΕΡΑ");            
    } 
  while ( u8g2.nextPage());
   delay(500);
    
  }
