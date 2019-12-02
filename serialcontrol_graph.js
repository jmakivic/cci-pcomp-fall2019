let serial;
let latestData = "waiting for data";
var xPos = 0;

function setup() {
 createCanvas(400, 300);
 background(0x08, 0x16, 0x40);

 serial = new p5.SerialPort();

 serial.list();
 
 //Change this to the name of your Arduino Serial port
 serial.open('COM4');

 serial.on('connected', serverConnected);

 serial.on('list', gotList);
    
serial.on('open', gotOpen);

 serial.on('data', gotData);

 serial.on('error', gotError);

 serial.on('close', gotClose);
    

}

function serverConnected() {
 print("Connected to Server");
}

function gotList(thelist) {
 print("List of Serial Ports:");

 for (let i = 0; i < thelist.length; i++) {
  print(i + " " + thelist[i]);
 }
}

function gotOpen() {
 print("Serial Port is Open");
}

function gotClose(){
 print("Serial Port is Closed");
 latestData = "Serial Port is Closed";
}

function gotError(theerror) {
 print(theerror);
}

function gotData() {
 
 let currentString = serial.readLine();
    //currentString ="Hi"
  trim(currentString);
 if (!currentString) return;
 
 latestData = currentString;
}

function graphData(newData){
    var yPos = map(newData, 0, 1023, 0, height);
    stroke(0xA8, 0xD9, 0xA7);
    line(xPos, height, xPos, height - yPos);
    
    if(xPos >= width){
        
        xPos = 0;
        background(0x08, 0x16, 0x40);
    }else{
        xPos++;
    }
}

function draw() {
 /*background(255,255,255);
 fill(0,0,0);
 text(latestData, 10, 10);*/

    graphData(latestData);
 // Polling method
 /*
 if (serial.available() > 0) {
  let data = serial.read();
  ellipse(50,50,data,data);
 }
 */
}
