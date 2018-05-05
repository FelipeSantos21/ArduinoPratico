const int pinRed = 11;
const int pinGreen = 9;
const int pinBlue = 10;

void setup() {
 Serial.begin(9600);
 Serial.println("Iniciado"); 
 alterarCorLedRgb(0,0,0);
}

void loop() {
  if (Serial.available()) {
    int valRed = Serial.readStringUntil(',').toInt();
    int valGreen = Serial.readStringUntil(',').toInt();
    int valBlue = Serial.readStringUntil('\n').toInt();
    
    alterarCorLedRgb(valRed, valGreen, valBlue);
    
  }
}

void alterarCorLedRgb (int r, int g, int b) {
    analogWrite(pinRed, r);
    analogWrite(pinGreen, g);
    analogWrite(pinBlue, b);

    Serial.println("\n\n\nValor alterado!");
}

