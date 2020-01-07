Physical Computing
==================

Lecturer: Julia Makivic

**Office Hours**

Thursday: 12pm - 4pm
Friday: 12pm - 4pm


## Week 1 (12/11/2019): Introduction to Physical Computing

**Links to Class Materials**

[Week 1 Slides](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Physical%20Computing.pptx)

The Arduino Projects Book: [pdf](https://bastiaanvanhengel.files.wordpress.com/2016/06/arduino_projects_book.pdf)

The Spaceship Interface project is on pg. 33

**Homework**

Think of how you can expand on the “Spaceship Interface” exercise in the Arduino Projects book. How could you make an engaging interactive project using a few LEDS, a pushbutton and/or a tilt switch? Next week bring sketches/designs or prototypes of your ideas.


## Week 2 (19/11/2019)


**Note:** This week I am only having office hours on Friday

This week introduces programming RGB LEDs and using temperature and color sensors as inputs.

**Class Materials**

[Week 2 Slides](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Physical%20Computing%20-%20Week%202.pptx)

The Arduino Projects Book: [pdf](https://bastiaanvanhengel.files.wordpress.com/2016/06/arduino_projects_book.pdf)

Spaceship Interface: pg. 33


Love-O-Meter: pg.43


Color Mixing Lamp: pg. 53


[Audio for week 2: ](https://drive.google.com/open?id=12UVyf24q05a3jatpUSf9OHX66ckoL6tt)

**Homework**

How can you create a new speculative design object using the sensors from lab? What would the object do? What physical, digital and “immaterial” materials would it use? What affordances would its material qualities provide and what sort of interaction would they enable?
Bonus: Research a new type of sensor on your own and create a speculative object that uses it.

## Conductive Paint Workshop 25/11/2019

This workshop will cover the basics of using conductive paint to create touch and proximity sensors. 

**Resources**

Slides and workshop projects: [Conductive Paint Workshop](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Conductive%20Paint%20Workshop.pdf)

Code samples:

[Capsense1.ino](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/CapSense1.ino)

[Capsense2.ino](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/CapSense2.ino)

[Capsense3.ino](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/CapSense3.ino)

[Capsense4.ino](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/CapSense4.ino)

[Capsense5.ino](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/CapSense5.ino)


## Week 3 (26/11/2019)

This week will focus on the basics of creating sound with Arduino and piezos. We will learn how to use a piezo as a sensor for sound and vibrations. We will also learn how to read schematics.

**Resources**

Slides for Week 3: [pdf](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Physical%20Computing_%20Week%203.pdf)

**Class Materials**

The Arduino Projects Book: [pdf](https://bastiaanvanhengel.files.wordpress.com/2016/06/arduino_projects_book.pdf)

Schematic Symbols: pg. 10 -  Be sure to go over these in order to be able to read schematics

pg. 70 Light Theremin

pg. 78 Keyboard Instrument

pg. 124 Knock Lock - We did only part of this exercise this week, the rest will be completed next week. We put together everything on the circuit except for the servo motor and the blue capacitor. View the adjusted code [here:](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/knockLock.ino) 

[Audio for Week 3:](https://youtu.be/vvkCVlUcHOo)  

## Week 4 (Monday - 2/12/2019)

This week will focus on motors and serial communication. Monday will cover servo motors and pulse width modulation. 

**Class Materials**

Slides for Week 4 Monday: [pdf](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Introduction%20to%20Physical%20Computing_%20Week%204%20(2_12_2019).pdf)

[Code for the simple servo exercise:](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/servo_motor_test.ino)


Book projects: 

pg. 62 Mood Cue

pg. 102 Knock Lock

In-class serial communication project:

Download p5.serialport [here](https://github.com/p5-serial/p5.serialcontrol/releases/tag/0.1.2)

Go to the slides to see how you should set up your breadboard.

Sending data from the Arduino to the p5 sketch:

[Arduino code](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/lightserial.ino)

[p5.js code Part 1](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/serialcontrol.js)

[p5.js code Part 2](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/serialcontrol_graph.js)

Sending data from p5 to the Arduino:

[Arduino Code](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/servo_motor_serial.ino)

[p5.js code](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/serialcontrol_send.js)

Follow these tutorials in order to setup serial communication between Arduino and p5.js

[Tutorial 1](https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/)

[Tutorial 2](https://medium.com/@yyyyyyyuan/tutorial-serial-communication-with-arduino-and-p5-js-cd39b3ac10ce)

## Week 4 (Tuesday - 3/12/2019)

Today we will continue covering motors. We will learn about transistors and how we can use them to control motors. We will also have a soldering workshop and will learn how to solder the Spaceship Interface exercise from pg. 33 of the [Arduino Projects Book](https://bastiaanvanhengel.files.wordpress.com/2016/06/arduino_projects_book.pdf) onto a perfboard. 

**Class materials**

From the Arduino Projects Book:

pg. 93 Motorized Pinwheel

pg. 102 Zoetrope

Slides for Tuesday, Week 4: [here](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Introduction%20to%20Physical%20Computing_%20Week%204%20(3_12_2019).pdf)

## Week 5 (Monday 6/1/2020)

Today's lecture will provide an overview of the history of haptic and tactile machine interfaces. The lab section will focus on sending Arduino data to Processing. The final portion of class will be dedicated to discussing any technical issues that the students may be facing in their projects. 

**Class materials**

From the Arduino Projects Book:

pg. 145 Tweak the Arduino Logo

Slides for Monday, Week 5: [here](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Physical-Computing-Week-5-6_1.pdf)

## Week 5 (Tuesday 7/1/2020)

Today's lecture will focus on the culture "maker" culture and developing alternative game controllers. The lab section will discuss how to send Processing data to Arduino and on creating capacitive touch sensors. The final portion of class will be dedicated to discussing any technical issues that the students may be facing in their projects. 

** Class Materials **

For the Processing Example:


Arduino Code: [here](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Processing_Fade.ino)

Processing Code: [here](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Processing_Fade.pde)

Slides for Tuesday, Week 5: [here](https://github.com/jmakivic/cci-pcomp-fall2019/blob/master/Physical-Computing-Week-5-7_1.pdf)


For the Capacitive Touch Example:


Arduino Projects Book, pg. 136

## Week 6 (Tuesday, 14/1/2020)




















