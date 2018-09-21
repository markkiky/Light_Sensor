/*Button header file
 file containing all functions relating to button eg
    Processing button press
    Debouncing button
*/
#ifndef _button_h
#define _button_h
int redLed = 2; //Red Led connected on pin 2
int blueLed = 3; //Blue Led connected on pin 3
int greenLed = 4; //Green Led connceted on pin 4
int ms = 500; //Delay time
int button = 5; // Button connceted on pin 5

#define PI 3.142
#define MAX_TEMP 100 /* Maximum temperature of the room*/
#define HIGH = 1


//Function Prototypes
/*
 * Function for blinking led
 * Requires the led pin number
 * Requires the time delay
 */
void blinkLed(int led,int ms);
/*
 * Function for clicking a button
 * Requires the button pin number
 * Requires the button state
 */
void pressButton (int button);
/*
 * Function used to display my name
 * requires no parameters
 * prints my name
 */
void displayName(void);
/*
 *Function used to add 2 numbers
 *requires 2 integer parameters
 *returns an integer
 */
int addNumbers (int x, int y); 

#endif
