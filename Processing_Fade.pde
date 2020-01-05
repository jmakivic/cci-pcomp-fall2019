//importing serial libraries for serial communication
import processing.serial.*;

//declarin Serial object 
Serial myPort;

void setup(){
  //declaring dimensions of display area
  size(200,200);
  
  //find the name of the first available serial port
  String portName = Serial.list()[0];
  
  //use the first available serial port
  myPort = new Serial(this, portName, 9600);
  


}

void draw(){

  //if mouse pressed, send '1' through the serial port
  if(mousePressed == true){
  
    myPort.write('1');
    println("1");
   
  }else{
  
    //otherwise send '0' through the serial port
    
    
  myPort.write('0');
  println("0");
  }


}
