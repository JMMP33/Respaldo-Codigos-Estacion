#include "HX711.h"

#define DOUT_PIN 4
#define CLK_PIN 2
const int zero = 15;
int state_zero = 0;
int last_state_zero = 0;
const float calibration_factor = 390;
HX711 scale;
#include <LiquidCrystal.h>
//Inicio de los pines para la LCD
LiquidCrystal lcd(22,23,5,18,19,21);

void setup() {
  Serial.begin(9600);
  scale.begin(DOUT_PIN, CLK_PIN);
  scale.set_scale(calibration_factor);  // Establecer la calibración
  lcd.begin(16,2);
}

void loop() {
  if (scale.is_ready()) {
    int state_zero = digitalRead(zero);
    float peso;
    float weight = scale.get_units(10);
    //Muestra el peso

    delay(5);
    //Botón de zero, esto sirve para restar el peso de un recipiente 
  if ( state_zero != last_state_zero) {
    if (state_zero == HIGH) {
      scale.tare(10);  //El peso actual es considerado zero.
    }
  }
    last_state_zero  = state_zero;

    Serial.print("Peso: ");
    Serial.print(weight, 2);  // Imprimir el peso con dos decimales
    Serial.println(" g");
  } else {
    Serial.println("Error en el sensor.");
  }
  delay(1000);  // Esperar un segundo antes de la próxima lectura
}

