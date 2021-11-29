


int irsensor=8;
int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(irsensor,0);
pinMode(10,1);
pinMode(11,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=digitalRead(8);
if(x==1)
{
  digitalWrite(10,1);
  digitalWrite(11,0);
  }
  if(x==0)
{
  digitalWrite(10,0);
  digitalWrite(11,0);
  }
}
