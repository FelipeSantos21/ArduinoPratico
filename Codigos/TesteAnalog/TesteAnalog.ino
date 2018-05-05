const int ledAmarelo = 6;
const int ldr = A2;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int leituraLdr = analogRead(ldr);
  Serial.println(leituraLdr);
  int saidaLed = map(leituraLdr, 0, 1024, 255, 0);
  
//  int saidaLed = map(leituraLdr, 200, 900, 255, 0);
//  if (saidaLed > 255) {
//    saidaLed = 255;
//  } else if (saidaLed < 0) {
//    saidaLed = 0;
//  }
  
  analogWrite(ledAmarelo, saidaLed);

}
