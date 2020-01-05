/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example takes in values from the serial port and uses them to 
  control the rate at which the LED changes brightness

*/

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5; //variable to determine the rate of the change in fade

char val;

// how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:

  

 //Check to see if there are values available in the Serial port
  if(Serial.available()){

    val = Serial.read();

  }

  //if the value sent through Serial is '1'
  //increase the brightness by fadeAmount
  //if the brightness value is greater than 250, it caps at 255
  //255 is the highest possible brightness value for an LED
  
  if (val == '1'){
    brightness = brightness + fadeAmount;

    if(brightness > 250){
      brightness = 255;
      }

      //assign the LED the analog value of the brightness value
      analogWrite(led, brightness);
    
    }

//if the value is 0, decrease the brightness by fadeAmount
 
  if (val == '0'){
    brightness = brightness - fadeAmount;

     if(brightness < 5){
      brightness = 0;
      }
      analogWrite(led, brightness);
    }
  // wait for 30 milliseconds to see the dimming effect
   delay(30);
  
 
}

