/* Blink - Pisca um led, de um em um segundo
Este código exemplo é de domínio público. */

// Existe um LED conectado no pino 13 da maioria dos Arduinos
int led = 13;

// Esta função "setup" roda uma vez quando a placa e ligada ou reiniciada
void setup() {
  // Configura o pino do led (digital) como saída
  pinMode(led, OUTPUT); // led corresponde a 13
}

// Função que repete infinitamente quando a placa é ligada
void loop() {
  digitalWrite(led, HIGH); // Liga o LED (HIGH = nível lógico alto)
  delay(1000);             // Espera um segundo
  digitalWrite(led, LOW);  // Desliga o LED (LOW = nível lógico baixo)
  delay(1000);             // Espera um segundo
}
