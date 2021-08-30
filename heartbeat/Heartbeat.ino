void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  int time = millis()/1000;
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  Serial.print(time);
  Serial.println(" sec have elapsed");

  
}
