

String voice;


int Motor1 = 8;
int Motor2 = 9;
int Motor3 = 10;
int Motor4 = 11;





void setup() {
  // put your setup code here, to run once:
 
Serial.begin(9600);
pinMode( Motor1,OUTPUT);
pinMode( Motor2,OUTPUT);
pinMode( Motor3,OUTPUT);
pinMode( Motor4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0)
{
  delay(10);
  char c = Serial.read();
  voice+=c;
}

if(voice.length()>0)
{
  Serial.println(voice);
}
  if(voice == "forward")
  {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  
  else if(voice == "left")
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
  }
  else if(voice == "right")
  {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  else if(voice == "back")
  {
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
  }
  else if(voice == "stop")
  {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
  }
  voice = "";
}
