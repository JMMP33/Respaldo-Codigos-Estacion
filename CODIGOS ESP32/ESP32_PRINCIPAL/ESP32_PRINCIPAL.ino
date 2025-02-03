#include <ESP32Servo.h>
#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(23, 22);
const int servoPin = 21;
int pos = 0;
Servo servo;

void setup() {
  servo.attach(servoPin, 500, 2400);
  Serial.begin(9600);
}



void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    servo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo.write(pos);
    delay(15);
  }


  Serial.println(distanceSensor.measureDistanceCm());
}

