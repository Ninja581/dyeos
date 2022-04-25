#include <virtuabotixRTC.h>
// Creation of the Real Time Clock Object
virtuabotixRTC cmost(6, 7, 8);

void setup() {
  // put your setup code here, to run once:
   pinMode(2, OUTPUT);
   Serial.begin(9600);

    // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
   //cmost.setDS1302Time(0, 4, 17, 1, 25, 4, 2022);
   

  
}

void loop() {
  // put your main code here, to run repeatedly:
   readyled();
   cmost.updateTime();
   time();
 


  
}

void readyled(){
  delay(1000);
   digitalWrite(2, HIGH);
   

}

void time(){
    Serial.print("Current Date / Time: ");
  Serial.print(cmost.dayofmonth);
  Serial.print("/");
  Serial.print(cmost.month);
  Serial.print("/");
  Serial.println(cmost.year);
}
