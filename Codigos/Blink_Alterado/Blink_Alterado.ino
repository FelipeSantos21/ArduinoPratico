const int ledVermelho = 7;
const int ledAmarelo = 6;

void setup() {
  // Configura os LEDs como saida
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);

  // Configura o LED vermelho como ligado
  digitalWrite(ledVermelho, HIGH);
  // Configura o LED amarelo como desligado'
  digitalWrite(ledAmarelo, LOW);
}

void loop() {
  // Declaração de variaveis que recebem os estados
  // atuais dos LEDs
  bool estadoLedVermelho = digitalRead(ledVermelho);
  bool estadoLedAmarelo = digitalRead(ledAmarelo);

  // Altera os estados dos LEDs
  digitalWrite(ledVermelho, !estadoLedVermelho);
  digitalWrite(ledAmarelo, !estadoLedAmarelo);

  // Espera 500 milisegundos
  delay(500);
}
