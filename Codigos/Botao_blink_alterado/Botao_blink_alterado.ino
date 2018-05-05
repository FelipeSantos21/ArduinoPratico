const int ledVermelho = 7;
const int ledAmarelo = 6;
const int botao = 2;

void setup() {
  // Configura os LEDs como saida
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  
  // Configura o botao como entrada
  pinMode(botao, INPUT);

  // Configura o LED vermelho como ligado
  digitalWrite(ledVermelho, HIGH);
  // Configura o LED amarelo como desligado'
  digitalWrite(ledAmarelo, LOW);
}

void loop() {
  // O if checa se o botao foi pressionado
  if (digitalRead(botao) == HIGH) {
    // Variaveis que recebem o valor atual dos LEDs
    bool estadoLedVermelho = digitalRead(ledVermelho);
    bool estadoLedAmarelo = digitalRead(ledAmarelo);

    // Inverte os valores dos LEDs
    digitalWrite(ledVermelho, !estadoLedVermelho);
    digitalWrite(ledAmarelo, !estadoLedAmarelo);
  }
  
}
