  int buttonPin = 7;
  int ledPin = 10;
  int estadoBotao = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, HIGH);

  // QUALQUER COISA QUE SERÁ TRATADA NA PLACA DURANTE O LOOP
    estadoBotao = digitalRead(buttonPin);

    if (estadoBotao == HIGH) {
      digitalWrite(ledPin, HIGH);
      delay(100);
    } else {
      digitalWrite(ledPin, LOW);
    }
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
}
