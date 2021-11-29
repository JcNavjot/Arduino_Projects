
int redPin = 9;
int greenPin = 10;
int bluePin = 11;





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
int x;
x = Serial.read();
  
if(x == 'a')
{
analogWrite(9,0);
analogWrite(10,255);
analogWrite(11,255);
delay(1000);
analogWrite(9,255);
analogWrite(10,0);
analogWrite(11,255);
delay(1000);
analogWrite(9,255);
analogWrite(10,255);
analogWrite(11,0);
delay(1000);
analogWrite(9,0);
analogWrite(10,0);
analogWrite(11,0);
delay(1000);
analogWrite(9,170);
analogWrite(10,0);
analogWrite(11,160);
delay(1000);
}
  }
