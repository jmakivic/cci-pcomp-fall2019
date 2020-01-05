/*In this example, you use a potentiometer to change the reading of the analog values
in pin A0. This information is then written to the serial port*/

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.write(analogRead(A0)/4);

  delay(1);

}
