#include <Servo.h>
Servo servo1,servo2,servo3,servo4,servo5;
int reading;
int mapVal;
int i;
int delay1 =100;
int minServo =35;
int maxServo = 180;
int minSFlex=100;
int maxSFlex=320;
int minBFlex=220;
int maxBFlex=520;
void setup(){
  servo1.attach(6);
  servo2.attach(10);
  servo3.attach(9);
  servo4.attach(11);
  servo5.attach(5);
}
void loop(){
  reading= analogRead(0);
  mapVal= map(reading,minSFlex,maxSFlex,minServo,maxServo);
  if(mapVal<minServo) mapVal=minServo;
  if(mapVal>maxServo)mapVal=maxServo;
  servo1.write(mapVal);
  delay(delay1);
  reading =analogRead(3);
  mapVal= map(reading,minSFlex,maxSFlex,minServo,maxServo);
  if(mapVal<minServo) mapVal=minServo;
  if(mapVal>maxServo)mapVal=maxServo;
  servo2.write(mapVal);
  delay(delay1);
  reading =analogRead(2);
  mapVal= map(reading,minBFlex,maxBFlex,minServo,maxServo);
  if(mapVal<minServo) mapVal=minServo;
  if(mapVal>maxServo)mapVal=maxServo;
  servo3.write(mapVal);
  delay(delay1);
  reading =analogRead(5);
  mapVal= map(reading,minSFlex+80,maxSFlex,minServo,maxServo);
  if(mapVal<minServo) mapVal=minServo;
  if(mapVal>maxServo)mapVal=maxServo;
  servo4.write(mapVal);
  delay(delay1);
  reading = analogRead(1);
  mapVal= map(reading,minSFlex+80,maxSFlex,minServo,maxServo);
  if(mapVal<minServo) mapVal=minServo;
  if(mapVal>maxServo)mapVal=maxServo;
  servo5.write(mapVal);
  delay(delay1);
 }
