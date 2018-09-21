#include "button.h"
int buttonState =1; //state

void setup() {
  //Sets the red led as an output
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(button, INPUT);
  //intialise serial console with 9600 baud rate /speed
  Serial.begin(9600);
}

void loop() {
  //Calls the blinkLed function with redLed paramater
  pressedButton(button);
}
