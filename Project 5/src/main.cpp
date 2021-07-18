#include <Arduino.h>

// VARIABLES
int buzzer = 8;


void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); //Inicialização da comunicação serial

}

void loop() {
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, HIGH);

  for (int i = 0; i < 5; i++) {
    tone(buzzer, 1500);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  
  // INDICADOR DE LOOP DA PLACA
  digitalWrite(LED_BUILTIN, LOW);
  delay(150);
  
}
