let serial;
let latestData = "waiting for data";

function setup() {
 createCanvas(windowWidth, windowHeight);

 serial = new p5.SerialPort();

 serial.list();
 
 //change this to the name of your Arduino serial port
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
 //console.log("sup");
//console.log(serial.readLine());
 let currentString = serial.readLine();
    //currentString ="Hi"
  trim(currentString);
 if (!currentString) return;
 //console.log(currentString);
// console.log("hi");
 latestData = currentString;
}

function draw() {
 background(255,255,255);
 fill(0,0,0);
 text(latestData, 10, 10);
 // Polling method
 /*
 if (serial.available() > 0) {
  let data = serial.read();
  ellipse(50,50,data,data);
 }
 */
}
