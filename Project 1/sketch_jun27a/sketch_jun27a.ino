  int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, HIGH);

  // QUALQUER COISA QUE SERÁ TRATADA NA PLACA DURANTE O LOOP
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);

  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, LOW);
  delay(150ms);
}
