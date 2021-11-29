//object counter


int irsensor=8;
int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(irsensor,0);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=digitalRead(8);
while(x==0)
{
  x=digitalRead(8);
if(x==1)
{
  count++;
  Serial.println(count);
  delay(1000);
}
}
}
