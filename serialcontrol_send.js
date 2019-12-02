let serial;
let latestData = "waiting for data";
var rightSlider;
var outData;

function setup() {
 createCanvas(600, 600);
 background(0x08, 0x16, 0x40);

 serial = new p5.SerialPort();

 serial.list();
 
 //Write the name of your own Arduino serial port here
 serial.open('COM4');

 serial.on('connected', serverConnected);

 serial.on('list', gotList);
    
serial.on('open', gotOpen);

 serial.on('data', gotData);

 serial.on('error', gotError);

 serial.on('close', gotClose);
    
rightSlider = createSlider(0,180,0);
    rightSlider.position(width/2 + (width/2-300)/2, height - 100);
    rightSlider.style('width', '300px');
    

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



function draw() {
 var rightBrightness = map(rightSlider.value(), 0,180,0,255);
fill(rightBrightness);
    rect(width/2,0,width/2,height);
    
    outData = rightSlider.value();
    serial.write(outData);
    var textColor = map(rightBrightness, 0, 255,255,0);
    fill(textColor);
    textSize(16);
 
    //Uncomment to display data from Arduino
    //text(latestData, width - 200,30);
 
    text("BRIGHTNESS LEVEL: "+rightSlider.value(), width - 300, 50);
}
