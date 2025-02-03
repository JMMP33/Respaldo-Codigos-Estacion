

// Define los pines para el sensor PIR y el LED
const int pirPin = 2;
const int ledPin = 5;

void setup() {
  // Inicializa el sensor PIR como entrada
  pinMode(pirPin, INPUT);
  
  // Inicializa el LED como salida
  pinMode(ledPin, OUTPUT);

   
}

void loop() {
  // Lee el valor del sensor PIR
  int pirValue = digitalRead(pirPin);
  
  // Si se detecta movimiento, enciende el LED
  if (pirValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(1000); // Mantiene el LED encendido durante 1 segundo
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, LOW); // Apaga el LED si no se detecta movimiento
  }
}
