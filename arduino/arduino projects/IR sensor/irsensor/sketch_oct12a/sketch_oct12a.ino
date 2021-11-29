int irsensor = 8;

void setup() {
  // put your setup code here, to run once:
pinMode(irsensor ,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int a;
  a=digitalRead(irsensor);

  if(a==HIGH)
  {
   
    Serial.println("obstacle");
    
    
  }
  else
  {
    Serial.println("no obstacle");
  
  }
  delay(200);

}
