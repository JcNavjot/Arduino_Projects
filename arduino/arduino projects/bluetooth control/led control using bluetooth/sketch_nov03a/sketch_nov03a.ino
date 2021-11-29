


int led=13;
int state=0;


void setup() {
  // put your setup code here, to run once:

pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  state = Serial.read();


  if(state=='0')
  {
    digitalWrite(led,LOW);
    Serial.println("LED:OFF");
    
  }
   if(state=='1')
  {
    digitalWrite(led,HIGH);
    Serial.println("LED:ON");
    
  }
}
}
