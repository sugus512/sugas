#define BT 17
#define BUTTON_A 16
#define BUTTON_B 14
#define IOT 12
#define NTP 15
#define WIFI 2

void setup() {
  pinMode(BT, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(BUTTON_A, INPUT_PULLUP);
  pinMode(IOT, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(BUTTON_B, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON_A) == LOW) {
    digitalWrite(BT, LOW);
    digitalWrite(WIFI, LOW);
  } else {
    digitalWrite(BT, HIGH);
    digitalWrite(WIFI, HIGH);
  }
  if (digitalRead(BUTTON_B) == LOW) {
    digitalWrite(IOT, LOW);
    digitalWrite(NTP, LOW);
  } else {
    digitalWrite(IOT, HIGH);
    digitalWrite(NTP, HIGH);
  }
}
