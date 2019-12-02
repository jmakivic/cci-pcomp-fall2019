#include <Servo.h>

int servoPin = 9;
int servoVal =0;
Servo Servo1;
//variable for reading from serial port
//used to receive data from p5.js
int incomingByte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Servo1.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);*/

  if(Serial.available() > 0){
    incomingByte = Serial.read();
    servoVal = map(incomingByte, 0, 180, 0,180);
    
    //Uncomment this line to send data from Arduino to the p5 sketch
    //Serial.println(servoVal);
    
    Servo1.write(servoVal);
    delay(10);
    }else{
      Servo1.write(20);
      }
}
