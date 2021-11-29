
#include <Keypad.h>

const byte ROWS =4;
const byte COLS =3;
int  in1 = 9;
int  in2 = 10;
int  in3 = 11;
int  in4 = 12;

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
  pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char customKeypad = customKey.getKey();

if(customKeypad){
  Serial.println(customKeypad);
}
  
if(customKeypad == '2')
{
  digitalWrite(9,1);
  digitalWrite(10,0);
digitalWrite(11,1);
digitalWrite(12,0);
}
if(customKeypad == '8')
{
  digitalWrite(9,0);
  digitalWrite(10,1);
digitalWrite(11,0);
digitalWrite(12,1);
}
if(customKeypad == '4')
{
digitalWrite(9,0);
  digitalWrite(10,1);
digitalWrite(11,1);
digitalWrite(12,0);  
}
if(customKeypad == '6')
{
  digitalWrite(9,1);
  digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(12,1);
}
}
