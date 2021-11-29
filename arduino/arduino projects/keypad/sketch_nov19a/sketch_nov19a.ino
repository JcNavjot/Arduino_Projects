
#include <Keypad.h>

const byte ROWS =4;
const byte COLS =3;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;


char hexakeys[ROWS][COLS] = {

  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'},
};

byte rowPins[ROWS] = {8,7,6,5};
byte colPins[COLS] = {4,3,2};

Keypad customKey = Keypad(makeKeymap(hexakeys),rowPins,colPins,ROWS,COLS);
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
analogWrite(9,255);
analogWrite(10,255);
analogWrite(11,255);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char customKeypad = customKey.getKey();

if(customKeypad){
  Serial.println(customKeypad);
}
  
if(customKeypad == '1')
{
  analogWrite(9,0);
analogWrite(10,255);
analogWrite(11,255);
}
if(customKeypad == '2')
{
  analogWrite(9,255);
analogWrite(10,0);
analogWrite(11,255);
}
if(customKeypad == '3')
{
  analogWrite(9,255);
analogWrite(10,255);
analogWrite(11,0);
}
if(customKeypad == '4')
{
  analogWrite(9,180);
analogWrite(10,255);
analogWrite(11,95);
}
}
