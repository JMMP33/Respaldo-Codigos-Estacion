#include <LiquidCrystal.h>
LiquidCrystal lcd(19, 23, 18, 21, 5, 15);
 
void setup() {
  // Inicializar LCD
  lcd.begin(16, 2); //Dimensión del LCD
}
 
void loop() {
  lcd.setCursor(0, 0); //Posición línea 1 del LCD (Col, fil)
  lcd.print("HOLA"); 
  lcd.setCursor(3, 1); //Posición línea 2 del LCD
  lcd.print("MUNDO");

  delay(1000);
}