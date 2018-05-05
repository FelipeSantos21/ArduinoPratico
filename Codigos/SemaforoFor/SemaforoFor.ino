const int pinLeds[] = {5, 6, 7}; // Verde, Amarelo, Vermelho

const int delayNormal = 2000;
const int delayAmarelo = 750;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(pinLeds[i], OUTPUT);
  }

}

void loop() {
  for (int c = 0; c < 3; c++) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(pinLeds[i], LOW);
    }
    digitalWrite(pinLeds[c], HIGH);
    if (c == 1) { //caso seja o led Amarelo
       delay(delayAmarelo);
    } else {
      
       delay(delayNormal);
    }
  }  
}
