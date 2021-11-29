

//LCD pins- Arduino pins
// vss-gnd
/* vdd-5v
 vo-6
 rs-12
 rw-gnd
 e-11
 d4-5
 d5-4
 d6-3
 d7-2
 A-5v
 K-gnd*/












#include <LiquidCrystal.h> 
int Contrast=20;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  } 
     void loop()
 { 
     lcd.setCursor(0, 0);
     lcd.print("navjot singh");
   
    lcd.setCursor(0, 1);
     lcd.print("us marine");
 }
