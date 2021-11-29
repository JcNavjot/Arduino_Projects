
void setup() {
  // put your setup code here, to run once:
pinMode(13,1);
pinMode(7,1);
pinMode(2,1);
Serial.begin(9600);
}
int count=0;
void loop() {
  // put your main code here, to run repeatedly:
  int x;
  x=Serial.read();
  if(x=='a')
  {
    count++;
  }
if(count==1)
  {
digitalWrite(13,1);
delay(1000);
digitalWrite(7,1);
delay(1000);
digitalWrite(2,1);

}
  if(count==2)
  {
    digitalWrite(13,0);
delay(1000);
digitalWrite(7,0);
delay(1000);
digitalWrite(2,0);
delay(1000);

  }
  
}
