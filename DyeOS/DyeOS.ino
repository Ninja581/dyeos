void setup() {
  // put your setup code here, to run once:
   pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   readyled();
}

void readyled(){
  delay(1000);
   digitalWrite(2, HIGH);
  

}
