/*
  Define the pins that will be used to connect the Arduino to the 7 segment display.
  Setup function, we set these pins to output mode.
  displayNumber function uses switch case to display each number from 0 to 9 by turning on and off the appropriate segments of the 7 segment display.
  Delay function to control how long each number is displayed before moving on to the next one.
*/

int segmentA = 2; //a is connected to pin 2 on Arduino
int segmentB = 3; //b is connected to pin 3 on Arduino
int segmentC = 4; //c is connected to pin 4 on Arduino
int segmentD = 5; //d is connected to pin 5 on Arduino
int segmentE = 6; //e is connected to pin 6 on Arduino
int segmentF = 7; //f is connected to pin 7 on Arduino
int segmentG = 8; //g is connected to pin 8 on Arduino

void setup() {
  pinMode(segmentA, OUTPUT); //Set segment a as output
  pinMode(segmentB, OUTPUT); //Set segment b as output
  pinMode(segmentC, OUTPUT); //Set segment c as output
  pinMode(segmentD, OUTPUT); //Set segment d as output
  pinMode(segmentE, OUTPUT); //Set segment e as output
  pinMode(segmentF, OUTPUT); //Set segment f as output
  pinMode(segmentG, OUTPUT); //Set segment g as output
}

//Function to display a number on the 7-segment display
void displayNumber(int number) {
  switch(number) {
    case 0:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, HIGH); //Set segment e on 7 segment on
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, LOW); //Set segment g on 7 segment off
      break;
    case 1:
      digitalWrite(segmentA, LOW); //Set segment a on 7 segment off
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, LOW); //Set segment d on 7 segment off
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, LOW); //Set segment f on 7 segment off
      digitalWrite(segmentG, LOW); //Set segment g on 7 segment off
      break;
    case 2:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, LOW); //Set segment c on 7 segment off
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, HIGH); //Set segment e on 7 segment on
      digitalWrite(segmentF, LOW); //Set segment f on 7 segment off
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 3:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, LOW); //Set segment f on 7 segment off
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 4:
      digitalWrite(segmentA, LOW); //Set segment a on 7 segment off
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, LOW); //Set segment d on 7 segment off
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 5:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, LOW); //Set segment b on 7 segment off
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 6:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, LOW); //Set segment b on 7 segment off
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, HIGH); //Set segment e on 7 segment on
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 7:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, LOW); //Set segment d on 7 segment off
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, LOW); //Set segment f on 7 segment off
      digitalWrite(segmentG, LOW); //Set segment g on 7 segment off
      break;
    case 8:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, HIGH); //Set segment e on 7 segment on
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
    case 9:
      digitalWrite(segmentA, HIGH); //Set segment a on 7 segment on
      digitalWrite(segmentB, HIGH); //Set segment b on 7 segment on
      digitalWrite(segmentC, HIGH); //Set segment c on 7 segment on
      digitalWrite(segmentD, HIGH); //Set segment d on 7 segment on
      digitalWrite(segmentE, LOW); //Set segment e on 7 segment off
      digitalWrite(segmentF, HIGH); //Set segment f on 7 segment on
      digitalWrite(segmentG, HIGH); //Set segment g on 7 segment on
      break;
  }
}
//display digits 0-9 
void loop() {
  for (int i = 0; i < 10; i++) {
    displayNumber(i);
    delay(1000); //delay for 1 second
  }
}
