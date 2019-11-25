#include <CapacitiveSensor.h>

//Declaring the capacitive touch sensor
CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2);

//Declaring variables for LED pins

const int maxVal = 600;




void setup() {
  // put your setup code here, to run once:
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  Serial.begin(9600);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  long start = millis();
  long total = cs_4_2.capacitiveSensor(30);
  Serial.println(total);
  delay(20);

  
  int pitch = map(total, 0,600, 50, 4000);

  tone(8, pitch, 20);

   //Writing values to LED Pins

   


}
