
/* sda = 10
sck=13
mosi = 11
miso = 10
gnd=gnd
rst=9
3.4=3.3
dont connect 5 volts pin otherwise it will burn
name of modoule is rc522*/




#include<SPI.h>
#include<MFRC522.h>

#define SS_PIN 10 //slave select
#define RST_PIN 9 // reset pin 
MFRC522 mfrc522(SS_PIN,RST_PIN); // Create MFRC522 instance.


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
SPI.begin();
mfrc522.PCD_Init(); // initialize mfrc522
Serial.println("put your card to the reader...");
Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
// ok for the new cards

if(! mfrc522.PICC_IsNewCardPresent()) 
{
  return;
}
if(! mfrc522.PICC_ReadCardSerial())
{
  return;
}
 // show UID on serial monitor

 Serial.println("UID tag:");
 String content = "";
 byte letter;
 for(byte i = 0;i< mfrc522.uid.size;i++)
 {
  Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? "0" : " ");
  Serial.print(mfrc522.uid.uidByte[i],HEX);
  content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? "0" : " "));
  content.concat(String(mfrc522.uid.uidByte[i],HEX));
 }
 {
  Serial.println();
  Serial.print("Message:");
  content.toUpperCase();
  if(content.substring(1) == "63 51 D7 73") // change the UID of the card you want to give access to
{
  Serial.println("Authorized Access");
  Serial.println();
  delay(3000);
}
else
{
 Serial.println(" Access denied");
  Serial.println();
  delay(3000); 
}
}
}
