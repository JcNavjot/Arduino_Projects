int irsensor = 8;
int led=13;
int lcd=6;

void setup() {
  // put your setup code here, to run once:
pinMode(irsensor ,INPUT);
pinMode(led,OUTPUT);
pinMode(lcd,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int a;
  a=digitalRead(irsensor);

  if(a==HIGH)
  {
    while(1){
    Serial.println("obstacle");
    digitalWrite(13,1);
    delay(1000);
    digitalWrite(6,1);
    delay(1000);
    digitalWrite(13,0);
    delay(1000);
    digitalWrite(6,0);
    
  }}
  else
  {
    Serial.println("no obstacle");
    digitalWrite(13,0);
    delay(1000);
    digitalWrite(6,0);
    
  }
  delay(200);

}
