const int buzzer = 13;
const int button = 2;
const int pot = A1;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    unsigned int valPot = 4699; // unsigned int varia de 0 a 65535  
    //valPot = analogRead(pot);
    //valPot = map(valPot, 0, 1024, 0, 65535);
    
    tone(buzzer, valPot);
  } else {
    noTone(buzzer);
  }

}
