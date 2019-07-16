// Write a program to toggle the LEDs every 1 second on the application board in the following order repeatedly. 

// GREEN  -> RED  -> BLUE  -> ALL OFF 

#include "mbed.h"
DigitalOut R(p23); //Red pin of RGB LED
DigitalOut G(p24); //Green pin of RGB LED
DigitalOut B(p25); //Blue pin of RGB LED

int main() { // main program, will use this to call up the led functions.   
    R = G = B = 1; // init led to off on start up
    while(1) { // do forever     
    // call the colour functions in the order specified in the question.     G-R-B-O 
        G = 0, R = B = 1;       
        wait (1); 
        R = 0, G = B = 1;       
        wait(1);
        B = 0, G = R = 1;       
        wait (1); 
        R = G = B = 1;       
        wait(1);
}
}
