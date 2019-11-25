#include <CapacitiveSensor.h>

//Declaring the capacitive touch sensor
CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2);
CapacitiveSensor cs_3_9 = CapacitiveSensor(3,9);
CapacitiveSensor cs_5_10 = CapacitiveSensor(5, 10);
CapacitiveSensor cs_6_11 = CapacitiveSensor(6, 11);

//Declaring variables for LED pins

const int maxVal = 600;




void setup() {
  // put your setup code here, to run once:
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_3_9.set_CS_AutocaL_Millis(0xFFFFFFFF);
  Serial.begin(9600);

  
}

void loop() {
  // put your main code here, to run repeatedly:
  long start = millis();
  long total1 = cs_4_2.capacitiveSensor(30);
  long total2 = cs_3_9.capacitiveSensor(30);
  long total3 = cs_5_10.capacitiveSensor(30);
  long total4 = cs_6_11.capacitiveSensor(30);

  
  Serial.print(total1);
  Serial.print("\t");
  Serial.print(total2);
  Serial.print("\t");
  Serial.print(total3);
  Serial.print("\t");
  Serial.print(total4);
  Serial.println("\t");
  
  delay(20);

  
 

   //Writing values to LED Pins

   


}
