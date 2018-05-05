const int pinoPot = A1;

void setup() {
  // Inicia a comunicacao serial a 9600 bauds
  // Velocidade padrao
  Serial.begin(9600);

  // Printa uma mensagem na tela dizendo que o 
  // Arduino está iniciado e ao final uma quebra
  // de linha.
  Serial.println("Iniciado");

}

void loop() {
  // Printa o texto, mas sem a quebra de linha ao final
  Serial.print("Valor: ");
  // Declara uma variavel que recebe o valor da
  // leitura digital
  int valorPot = analogRead(pinoPot);
  Serial.print(valorPot);
}
