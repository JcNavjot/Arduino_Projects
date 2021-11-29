#include <SoftwareSerial.h>

#include <Servo.h> 
Servo myservo1, myservo2, myservo3, myservo4, myservo5, myservo6;

int bluetoothTx = 7;
int bluetoothRx = 8;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()
{
  myservo1.attach(9); //gripper
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(3);//elbow
  myservo5.attach(5); 
  myservo6.attach(6); // base
  //Setup usb serial connection to computer
  Serial.begin(9600);
TIMSK0=0;
  //Setup Bluetooth serial connection to android
  bluetooth.begin(9600);
}

void loop()
{
  //Read from bluetooth and write to usb serial
  if(bluetooth.available()>= 2 )
  {
    unsigned int servopos = bluetooth.read();
    unsigned int servopos1 = bluetooth.read();
    unsigned int realservo = (servopos1 *256) + servopos; 
    Serial.println(realservo); 
    
    if (realservo >= 1000 && realservo <1180){
    int servo1 = realservo;
    servo1 = map(servo1, 1000,1180,0,180);
    myservo1.write(servo1);
    Serial.println("Servo 1 ON");
    delay(10);
    }
    if (realservo >=2000 && realservo <2180){
      int servo2 = realservo;
      servo2 = map(servo2,2000,2090,30,100);
      myservo2.write(servo2);
      Serial.println("Servo 2 ON");
      delay(10);  
    }
    if (realservo >=3000 && realservo < 3180){
      int servo3 = realservo;
      servo3 = map(servo3, 3000, 3180,0,180);
      myservo3.write(servo3);
      Serial.println("Servo 3 ON");
      delay(10);
    }
    if (realservo >=4000 && realservo < 4180){
      int servo4 = realservo;
      servo4 = map(servo4, 4000, 4090,50,150);
      myservo4.write(servo4);
      Serial.println("Servo 4 ON");
      delay(10);
    }
    
    if (realservo >=5000 && realservo < 5180){
      int servo5 = realservo;
      servo5 = map(servo5, 5000,5090,110,150);
      myservo5.write(servo5);
      Serial.println("Servo 5 ON");
      delayMicroseconds(10);
    }
    
    if (realservo >=6000 && realservo < 6180){
      int servo6 = realservo;
      servo6 = map(servo6, 6000, 6180,0,180);
      myservo6.write(servo6);
      Serial.println("Servo 6 ON");
      delay(10);
    }
  }
}