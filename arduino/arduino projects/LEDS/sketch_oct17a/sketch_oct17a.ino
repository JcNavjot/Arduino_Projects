
// This code is to turn on and off multiple leds
void setup() {
  // put your setup code here, to run once:
pinMode(13,1);
pinMode(7,1);
pinMode(2,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=Serial.read();

if(x=='a')
{
  digitalWrite(13,1);
}
if(x=='b')
{
 digitalWrite(13,0); 
}
if(x=='y')
{
  digitalWrite(7,1);
}
if(x=='7')
{
  digitalWrite(7,0);
}
if(x=='o')
{
  digitalWrite(2,1);
}
if(x=='p')
{
  digitalWrite(2,0);
}
}
