


//this prgram is to display irsensor input on lcd display
//* LCD pins- Arduino pins
 vss-gnd
 vdd-5v
 vo-6
 rs-12
 rw-gnd
 e-11
 d4-5
 d5-4
 d6-3
 d7-2
 A-5v
 K-gnd 




#include <LiquidCrystal.h> 
int Contrast=75;
int irsensorPin = 8;

 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
     pinMode(irsensorPin ,INPUT);
     Serial.begin(9600);
     
  } 
     void loop()
 { 
     int a;
     
     a = digitalRead(irsensorPin);

     if(a==HIGH)
     {
      lcd.println(" obstacle");
     }
     else
     {
      lcd.println("no obstacle");
     }
     delay(500);   
     lcd.setCursor(0,0); 
 }
