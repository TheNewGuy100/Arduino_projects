#include <Arduino.h>

// VARIABLES
  int ldr = A0; //Atribui A0 a variável ldr
  int led1 = 10;
  int valorldr = 0; //Declara a variável valorldr como inteiro

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldr, INPUT);  //Define ldr (pino analógico A0) como saída
  pinMode(led1, OUTPUT);

  Serial.begin(9600); //Inicialização da comunicação serial, com taxa de

}

void loop() {
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, HIGH);

  valorldr = analogRead(ldr); //Lê o valor do sensor ldr e armazena na variável valorldr

  Serial.print("Valor lido pelo LDR = "); //Imprime na serial a mensagem
  Serial.println(valorldr); //Imprime na serial os dados de valorldr

  if (valorldr > 500) {
    digitalWrite(led1, LOW);
  } else {
    digitalWrite(led1, HIGH);
  }
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  
}
