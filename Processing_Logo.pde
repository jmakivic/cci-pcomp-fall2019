//importing library to allow serial communication
import processing.serial.*;

//Declaring Serialport object
Serial myPort;

//declaring image object
PImage logo;

//declaring int to represent background color
int bgcolor = 0;

void setup(){

  //change hue 
  colorMode(HSB, 255);
  
  //load the image
  logo = loadImage("arduino_logo.png");
  //declare size of viewport
  size(300, 600, P3D);
  
  //print the available serial ports
  println("Available serial ports:");
  println(Serial.list());
  
  myPort = new Serial(this, Serial.list()[0], 9600);

}

void draw(){

//if the there is data available in ther serial port,
//read the values
//assign them to the bgcolor
//print the bgcolor value

if(myPort.available() > 0){
  bgcolor = myPort.read();
  println(bgcolor);
  
}

//change the background color according to the bgcolor variable
background(bgcolor, 255,255);
//draw the logo in the upper left corner
image(logo, 0,0);



}
