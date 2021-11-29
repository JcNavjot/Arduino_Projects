int trigPin = 5;
 int echoPin = 6;
 int in1 = 8;
 int in2 = 9;
 int in3 = 10;
 int in4 = 11;
 
  
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);


duration = pulseIn(echoPin,HIGH);
distance = (duration/2)/29.1;
Serial.print(distance);
Serial.println("CM");
delay(10);

if(distance<=20)
{
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}
else if(distance>20)
{
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
}
}
