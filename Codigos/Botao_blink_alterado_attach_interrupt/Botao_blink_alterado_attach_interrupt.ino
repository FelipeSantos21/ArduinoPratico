const int ledVermelho = 7;
const int ledAmarelo = 6;
const int botao = 2;
const int pinoPot = A1;

// Copiei o if que estava no void loop e transformei ele em uma função
void btnTroca () {
  // Variaveis que recebem o valor atual dos LEDs
  bool estadoLedVermelho = digitalRead(ledVermelho);
  bool estadoLedAmarelo = digitalRead(ledAmarelo);

  // Inverte os valores dos LEDs
  digitalWrite(ledVermelho, !estadoLedVermelho);
  digitalWrite(ledAmarelo, !estadoLedAmarelo);
}

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

  // Attach Interrupt para inverter os estados do LED quando o botão for pressionado
  attachInterrupt(digitalPinToInterrupt(botao), btnTroca, RISING);
}

void loop() {
  // Printa o texto, mas sem a quebra de linha ao final
  Serial.print("Valor: ");
  // Declara uma variavel que recebe o valor da
  // leitura digital
  int valorPot = analogRead(pinoPot);
  Serial.println(valorPot);
}
