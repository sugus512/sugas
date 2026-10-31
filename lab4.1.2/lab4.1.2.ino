void setup() {
  Serial.begin(115200);
  int count = 1;
  int BT = 17;
  pinMode(BT, OUTPUT);
  while (count <= 5) {
    digitalWrite(BT, LOW);
    delay(500);
    digitalWrite(BT, HIGH);
    delay(500);
    Serial.println(count);
    count++;
    count = 5;
    while (count >= 1) {
      Serial.println(count);
      count--;
    }
  }
}


void loop() {
  
}
