/*
  BOTÃO
  
  Utiliza um botão de pressão, conectado ao pino 2, para ligar e
  desligar um LED conectado ao pino digital 13.
*/

// Determinamos constantes para os números dos pinos utilizados
// Número do pino do botão de pressão
const int buttonPin = 2;  
// Número do pino do led
const int ledPin = 13;    

// Variáveis
// Variável para leitura do estado do botão
int buttonState = 0;      

// Executa uma vez ao ligar ou reiniciar a placa
void setup() {
  //Inicializa o pino do LED como saída (OUTPUT)
  pinMode(ledPin, OUTPUT);
  // Inicializa o pin do botão como entrada (INPUT)    
  pinMode(buttonPin, INPUT);  
}

// Executa infinitamente quando liga a placa
void loop() {
  
  // Lê o estado do botão (HIGH -> +5V -> botão press.) (LOW -> 0V)
  buttonState = digitalRead(buttonPin); 
  
  // Testa se o botão está pressionado
  if (buttonState == HIGH) {    
    // Se sim, o estado do botão e alto (HIGH)
    digitalWrite(ledPin, HIGH); // Liga o LED
  }
  else {
     // Senão (Botão não pressionado)
     // Desliga o LED
    digitalWrite(ledPin, LOW);
  }
}
