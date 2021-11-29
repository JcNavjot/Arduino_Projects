
int redPin = 9;
int greenPin = 10;
int bluePin = 11;





void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //red led
digitalWrite(9,0);
delay(1000);
digitalWrite(9,1);
//blue led
digitalWrite(10,0);
delay(1000);
digitalWrite(10,1);
//green led
digitalWrite(11,0);
delay(1000);
digitalWrite(11,1);
  
  }
