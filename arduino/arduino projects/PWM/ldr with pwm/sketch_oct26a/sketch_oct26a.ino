

int led1=10;
int led2=11;
int i;



void setup() {
  // put your setup code here, to run once:
pinMode(10,1);
pinMode(A0,0);
pinMode(11,1);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x;
x=analogRead(A0);
Serial.println(x);
delay(200);

if(x>=900 && x<=1000)
{
  analogWrite(led1,50);
  analogWrite(led2,50);
  delay(10);
}
if(x>=200 && x<=900)
{
  
  analogWrite(led1,240);
  analogWrite(led2,240);
  delay(10);

}
}
