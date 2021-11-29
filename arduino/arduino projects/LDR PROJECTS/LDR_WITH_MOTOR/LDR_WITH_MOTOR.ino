



void setup() {
  // put your setup code here, to run once:

pinMode(A0,0);
pinMode(7,1);
pinMode(6,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=analogRead(A0);
Serial.println(x);
delay(200);


if(x>=0 && x<=30)
{
  digitalWrite(6,0);
  digitalWrite(7,1); 
}
if(x>=30 && x<=50)
{
  digitalWrite(6,0);
  digitalWrite(7,0); 
}

}
