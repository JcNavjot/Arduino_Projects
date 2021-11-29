

// this program is to turn on and aff leds using single switch



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,1);
pinMode(7,1);
pinMode(2,1);
}
int temp=0,count=0,x;
void loop() {
  // put your main code here, to run repeatedly:
x=Serial.read();

if(x=='a' || x=='A')
{
  count++;
}
temp=count%2;

if(temp==1)
{
  digitalWrite(13,1);
  digitalWrite(7,1);
  digitalWrite(2,1);
}
else if(temp==0)
{
  digitalWrite(13,0);
  digitalWrite(7,0);
  digitalWrite(2,0);
  
}
}
