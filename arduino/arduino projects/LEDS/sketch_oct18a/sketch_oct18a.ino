// this [rogram is to switch on led with single button a and turn them off after 2 sec







void setup() {
  // put your setup code here, to run once:
pinMode(13,1);
pinMode(7,1);
pinMode(2,1);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int x=Serial.read();
if(x=='a')
{
  digitalWrite(13,1);
  digitalWrite(7,1);
  digitalWrite(2,1);
  delay(2000);
  digitalWrite(13,0);
  digitalWrite(7,0);
  digitalWrite(2,0);
}

}
