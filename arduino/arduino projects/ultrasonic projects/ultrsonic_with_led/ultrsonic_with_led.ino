
 int trigPin = 9;
 int echoPin = 10;
 int led = 13;
 //time
  
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration,distance;
digitalWrite(trigPin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin,LOW);


duration = pulseIn(echoPin,HIGH);
distance = (duration/2)/29.1;
Serial.println(distance);
Serial.println("CM");
delay(10);

if(distance<=10)
{
  digitalWrite(led,HIGH);
}
else if(distance>10)
{
  digitalWrite(led,LOW);
}
}
