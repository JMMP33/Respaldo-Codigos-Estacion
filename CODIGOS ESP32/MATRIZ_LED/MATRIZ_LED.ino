#include <MD_MAX72xx.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW ///////define el modulo que estamos utilizando en caso de arduino  DR0CR0RR1_HW

#define DATA_PIN 23
#define CLK_PIN 18
#define CS_PIN 5
#define NUM_OF_MATRIX 4  

MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, NUM_OF_MATRIX);


void setup() {

  mx.begin();
  mx.control(MD_MAX72XX::TEST, true);
  delay(2000);
  mx.control(MD_MAX72XX::TEST, false);
  mx.control(MD_MAX72XX::INTENSITY, 5);
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, !");
}

void loop() {

// prender filas
  //mx.clear();
  //mx.setColumn(0,1,B11111111);
  //mx.setColumn(0,2,B11111110);
  //mx.setColumn(0,3,B11111100);
  //mx.setColumn(0,4,B11111000);
  //mx.setColumn(0,5,B11110000);
  //mx.setColumn(0,6,B11100000);
  //mx.setColumn(0,7,B11000000);

//prender columnas
//mx.setPoint(1,1,true);

//COLOCAR TEXTO

//mx.setChar(, 'F');

for(int i=0;i<60;i++){
mx.setChar(i-5,'P');
mx.setChar(i-10,'R');
mx.setChar(i-15,'E');
mx.setChar(i-20,'B');
mx.setChar(i-25,'A');
mx.setChar(i-30,'-');
mx.setChar(i-35,'E');
mx.setChar(i-40,'S');
mx.setChar(i-45,'P');
mx.setChar(i-50,'3');
mx.setChar(i-55,'2');
}
  
  delay(400); 
 mx.clear();
}
