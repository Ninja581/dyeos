#include <virtuabotixRTC.h>
// Creation of the Real Time Clock Object
virtuabotixRTC cmost(6, 7, 8);
const int buzzer = 12;


void setup() {
 
   pinMode(2, OUTPUT);
   pinMode(buzzer, OUTPUT);
   Serial.begin(9600);
   StartSound();
    // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
   //cmost.setDS1302Time(0, 4, 17, 1, 25, 4, 2022);
}

void loop() {
   cmost.updateTime();
   time();
}

void time(){
  delay(60000);
    Serial.print("Current Date : ");
  Serial.print(cmost.dayofmonth);
  Serial.print("/");
  Serial.print(cmost.month);
  Serial.print("/");
  Serial.println(cmost.year);
}

void StartSound(){
   tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  }
