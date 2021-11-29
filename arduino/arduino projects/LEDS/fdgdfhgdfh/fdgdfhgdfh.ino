

// in this one the led will turn on and will keep on until we again press th e push button 





void setup() {
  // put your setup code here, to run once:
pinMode(4,0);
pinMode(7,1);
Serial.begin(9600);
}
int count=0,temp=0;
void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(4);


if(x==1)
{
 count++;
}
temp=count%2;
if(temp==1)
{
  digitalWrite(7,1);
}

if(temp==0)
{
  digitalWrite(7,0);
}
delay(500);
}
