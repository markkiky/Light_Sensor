#include "button.h"
/*
 * Function for blinking led
 * Requires the led pin number
 * Requires the time delay
 */
void blinkLed(int led,int ms){
  digitalWrite(led, HIGH);
  delay(ms);
  digitalWrite(led, LOW);
  delay(ms);
}
/*
 * Function for clicking a button
 * Requires the button pin number
 * Requires the button state
 */
void pressButton (int button){
  buttonState = digitalRead(button);
  if (buttonState == HIGH){
    //turn off the led and display that Led is off
    digitalWrite(redLed,HIGH);
    serial.println("Led is on");
    
  }else{
    digitalWrite(redLed,LOW);
    Serial.println("Led is off");
  }
}
/*
 * Function used to display my name
 * requires no parameters
 * prints my name
 */
void displayName(void){
  serial.println("My name is Mark");
}
/*
 *Function used to add 2 numbers
 *requires 2 integer parameters
 *returns an integer
 */
int addNumbers (int x, int y){
  return (x+y);

}
