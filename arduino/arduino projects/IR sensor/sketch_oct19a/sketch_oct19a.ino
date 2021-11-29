// object counter






int irsensor=8;
int count=0;




void setup() {
  // put your setup code here, to run once:
pinMode(8,0);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(irsensor);


while(x==1)
{
  
 
  
  count++;
  Serial.println("No.of obstacles=");
  Serial.println(count);
  delay(1000);

}
}
