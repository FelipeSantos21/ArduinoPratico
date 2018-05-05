const int pinLedVermelho = 7;
const int pinLedAmarelo = 6;
const int pinLedVerde = 5;
char cor = 'r';

const int delayNormal = 2000;
const int delayAmarelo = 750;

void setup() {
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);

}

void loop() {
  digitalWrite(pinLedVermelho, LOW);
  digitalWrite(pinLedAmarelo, LOW);
  digitalWrite(pinLedVerde, LOW);
  
  switch (cor) {
    case 'r': // Red - Vermelho
      digitalWrite(pinLedVerde, HIGH);
      cor = 'g';
      delay(delayNormal);
    break;

    case 'g':
      digitalWrite(pinLedAmarelo, HIGH);
      cor = 'y';
      delay(delayAmarelo);
    break;
    
    case 'y':
      digitalWrite(pinLedVermelho, HIGH);
      cor = 'r';
      delay(delayNormal);
    break;
    
  }
}
