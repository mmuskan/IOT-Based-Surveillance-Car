//Motor 1 is connected to pin 1 & 2.
//Motor 2 is connected to pin 3 & 4.
#define BLYNK_PRINT Serial 
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "I0BsQuyR_jiCbOlGEDV1lpu3kZwJqXdP"; 
int forw=0;
int rev=0;
int left=0;
int rig=0;
int r=0;
int letr=0;
void myTimerEvent()
{
 
}
void setup()
{
  
Serial.begin(9600);
  Blynk.begin(auth, "shuvo", "rntc1516");
  while (Blynk.connect() == false) {
    // Wait until connected
  }
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}
 BLYNK_WRITE(V4)    //Forward
{
 int forw = param.asInt(); 
 if(forw==1)  
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D3,HIGH);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}
 BLYNK_WRITE(V1)  //Reverse
{
 int rev = param.asInt();
 if(rev==1)  
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D4,HIGH);
  } 
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}
 BLYNK_WRITE(V2)  //Right Rotate
{
 int left = param.asInt(); 
 if(left==1)  
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,HIGH);
    digitalWrite(D2,HIGH);
    digitalWrite(D4,LOW);
  }
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}
 BLYNK_WRITE(V3) //Left Rotate
{
 int rig = param.asInt(); 
 if(rig==1)  
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,HIGH);
  }
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}

BLYNK_WRITE(V5) //Right Turn
{
 int letr = param.asInt(); 
 if(letr==1)  
  {
    digitalWrite(D1,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}

BLYNK_WRITE(V6) //Left Turn
{
 int r = param.asInt(); 
 if(r==1)  
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,HIGH);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
   else
  {
    digitalWrite(D1,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D2,LOW);
    digitalWrite(D4,LOW);
  }
}

void loop()
{
  Blynk.run(); // Run Blynk
}
