

//this robot is same as line follower but only keep ir bulbs straight/horizontal



int irsensor1=2;
int irsensor2=7;







void setup() {
  // put your setup code here, to run once:
pinMode(2,0);
pinMode(7,0);
pinMode(8,1);
pinMode(9,1);
pinMode(10,1);
pinMode(11,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x,y;
x=digitalRead(2);
y=digitalRead(7);
if(x==1 && y==1)
{
 
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
 delay(1000);
}
  if(x==1 && y==0)
  {
   digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
 delay(1000);
  
  }
   if(x==0 && y==1)
  {
   digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
 delay(1000);
  
  }
 if(x==0 && y==0)
  {
   digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
 
  }
}
