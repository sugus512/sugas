#define BT 17

void setup() {
  Serial.begin(115200);
  pinMode(BT, OUTPUT);

  
  int count = 1;
  do {
    digitalWrite(BT, LOW);
    delay(1000);
    digitalWrite(BT, HIGH);
    delay(1000);
    Serial.println(count);
    count++;
  } while (count <= 5);

  
  count = 5;
  do {
    digitalWrite(BT, LOW);
    delay(1000);
    digitalWrite(BT, HIGH);
    delay(1000);
    Serial.println(count);
    count--;
  } while (count >= 1);
}

void loop() {
}