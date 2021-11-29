
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

char c;

String voice;
void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0)
    {
      voice = Serial.readString();
      Serial.println(voice);
    }

    if(voice == 'turn on')
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
else if (voice == 'turn off')
{
  analogWrite(9,255);
analogWrite(10,255);
analogWrite(11,255);
}
  }
