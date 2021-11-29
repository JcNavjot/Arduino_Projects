
int irsensor1=7;
int irsensor2=2;
int led=5;






void setup() {
  // put your setup code here, to run once:
pinMode(7,0);
pinMode(2,0);
pinMode(8,1);
pinMode(5,1);
pinMode(9,1);
pinMode(12,1);
pinMode(13,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x,y;
x=digitalRead(7);
y=digitalRead(2);
if(x==1)
{
 
  digitalWrite(12,1);
  digitalWrite(13,0);
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
 delay(1000);
}
  if(x==0)
  {
   
  digitalWrite(12,0);
  digitalWrite(13,0); 
  digitalWrite(5,0);
  }
  if(y==1)
  {
    digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
   
  }
  if(y==0)
  {
    digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(5,0);
   
  }
}
