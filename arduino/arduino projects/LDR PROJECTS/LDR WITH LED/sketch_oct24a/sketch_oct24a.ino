




void setup() {
  // put your setup code here, to run once:
pinMode(13,1);
pinMode(A0,0);
pinMode(7,1);
pinMode(2,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=analogRead(A0);
Serial.println(x);
delay(200);

if(x<=500)
{
  digitalWrite(13,1);
  digitalWrite(7,1);
  digitalWrite(2,1);
}
if(x>=500 && x<=600)
{
  digitalWrite(13,1);
  digitalWrite(7,1); 
}
if(x>=600&& x<=800)
{
  digitalWrite(13,1);
}
if(x>=900)
{
  digitalWrite(13,0);
  digitalWrite(7,0);
  digitalWrite(2,0);
}
}
