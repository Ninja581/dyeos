#include <virtuabotixRTC.h>
// Creation of the Real Time Clock Object
virtuabotixRTC cmost(6, 7, 8);

void setup() {
  // put your setup code here, to run once:
   pinMode(2, OUTPUT);
   Serial.begin(9600);
   cmost.setDS1302Time(25, 35, 16, 1, 25, 4, 2022);
   

  
}

void loop() {
  // put your main code here, to run repeatedly:
   readyled();
   cmost.updateTime();

   Serial.print("Current Date / Time: ");
  Serial.print(cmost.dayofmonth);
  Serial.print("/");
  Serial.print(cmost.month);
  Serial.print("/");
  Serial.print(cmost.year);
  Serial.print("  ");
  Serial.print(cmost.hours);
  Serial.print(":");
  Serial.print(cmost.minutes);
  Serial.print(":");
  Serial.println(cmost.seconds);

  
}

void readyled(){
  delay(1000);
   digitalWrite(2, HIGH);
   

}
