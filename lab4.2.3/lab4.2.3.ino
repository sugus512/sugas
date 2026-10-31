
void setup() {
  int BT = 17;
  pinMode(BT, OUTPUT);
  Serial.begin(115200);
  for (int count = 1; count <= 10; count++) {
    if (count == 5) {
      break;
    }
    Serial.println(count);
    digitalWrite(BT, HIGH);
    delay(500);
    digitalWrite(BT, LOW);
    delay(500);
  }

  for (int count = 10; count >= 1; count--) {
    if (count == 7) {
      continue;
    }
    Serial.println(count);
    digitalWrite(BT, HIGH);
    delay(500);
    digitalWrite(BT, LOW);
    delay(500);
  }
}


void loop() {
}