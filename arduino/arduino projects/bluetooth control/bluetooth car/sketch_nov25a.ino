


int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;
int state=0;


void setup() {
  // put your setup code here, to run once:

pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  state = Serial.read();


  if(state=='1')
  {
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    Serial.println("FORWARD");
  }
   if(state=='2')
  {
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    digitalWrite(in3,1);
    digitalWrite(in4,0);
    Serial.println("LEFT");
  }
  if(state=='3')
  {
    digitalWrite(in1,1);
    digitalWrite(in2,0);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    Serial.println("RIGHT");
  }
  if(state=='4')
  {
    digitalWrite(in1,0);
    digitalWrite(in2,1);
    digitalWrite(in3,0);
    digitalWrite(in4,1);
    Serial.println("BACK");
  }
  if(state=='5')
  {
    digitalWrite(in1,0);
    digitalWrite(in2,0);
    digitalWrite(in3,0);
    digitalWrite(in4,0);
    Serial.println("STOP");
  }
}
}
