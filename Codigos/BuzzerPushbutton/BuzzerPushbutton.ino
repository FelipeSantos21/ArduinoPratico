const int buzzer = 13;
const int button = 2;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

}
