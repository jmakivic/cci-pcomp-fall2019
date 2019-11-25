#include <CapacitiveSensor.h>

//Declaring the capacitive touch sensor
CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2);

//Declaring variables for LED pins
const int redLEDPin = 3;
const int blueLEDPin = 5;
const int greenLEDPin = 6;

const int maxVal = 600;

int redValue;
int greenValue;
int blueValue;

void setup() {
  // put your setup code here, to run once:
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
  Serial.begin(9600);

  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long start = millis();
  long total = cs_4_2.capacitiveSensor(30);
  Serial.println(total);
  delay(20);

  if(total >=0 && total<200){
      blueValue = map(total,0,200, 0,255 );
      redValue = 0;
      greenValue = 0;
    }

  if(total>=200 && total <400){
    blueValue = map(total,200,400, 0,255 );
    redValue = map(total,200,400, 0,200 );
    greenValue = map(total,200,400, 0,100 );
    
    }

  if(total >= 400 && total < maxVal){
    
    blueValue = map(total,400,600, 0,50 );
    redValue = map(total,400,600, 0,255 );
    greenValue = map(total,400,600, 0, 0 );
    
    }

   //Writing values to LED Pins

   analogWrite(redLEDPin, redValue);
   analogWrite(greenLEDPin, greenValue);
   analogWrite(blueLEDPin, blueValue);


}
