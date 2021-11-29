


// this program is to switch on and off led using push button









void setup() {
  // put your setup code here, to run once:
pinMode(4,0);
pinMode(7,1);
Serial.begin(9600);
}
int count=0;
void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(4);
if(x==1)
{
 digitalWrite(7,1);
}
if(x==0)
{
digitalWrite(7,0);
}
}
