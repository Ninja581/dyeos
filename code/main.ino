void setup() {
  // put your setup code here, to run once:
   pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   readyled();
}

void readyled(){
   digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
