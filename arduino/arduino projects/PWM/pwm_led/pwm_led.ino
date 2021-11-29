

int led1=10;
int led2=11;
int i;



void setup() {
  // put your setup code here, to run once:
pinMode(10,1);
pinMode(11,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

for(int i=0;i<255;i++)
{
  analogWrite(led1,i);
  analogWrite(led2,i);
  delay(10);
}
for(int i=255;i>0;i--)
{
  analogWrite(led1,i);
  analogWrite(led2,i);
  delay(10);
}
}
