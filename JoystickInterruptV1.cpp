// available at https://os.mbed.com/users/BertieHarte/code/JoystickInteruptV1/
// Uses LED for int main to show process running while waiting for interrupts.

#include "mbed.h"
// Embedded Systems COMP71004 LAB Excercise #1.
// Write a program using interrupts on digital pins 12-16 (Joystick on Application board).
// Use printf to print to terminal the direction the jostick is moved.
// pin defined for Joystick Inputs and LED outputs as per Appliciation board.
InterruptIn l(p13); //left
InterruptIn r(p16); //right
InterruptIn u(p15); //up
InterruptIn d(p12); //down
InterruptIn c(p14); //centre
DigitalOut flash(LED4); // used to show that the mdbed is doing something while waitng for interrupt - not required by the question.
// functions for response to the interrupts, print message to terminal. 
void left() {
   printf("Joystick Left \n \r"); // print, (n)ew line, (r)eturn to start pos of new line   
}

void right() {
    printf("Joystick Right \n \r");    
}
 
void up() {
    printf("Joystick Up \n \r");
}

void down() {
    printf("Joystick Down \n \r");
}

void centre() {
    printf("Joystick Centered \n \r");
}

int main() {
    l.rise(&left);  // attach the address of the (left in this line) functions to the interrupt rising edge. 0->1
    r.rise(&right);  
    u.rise(&up);
    d.rise(&down);   
    c.rise(&centre);     
    while(1) {           // flash led4 until interrupt to show that program is stopping while interrupt is active. 
        flash = !flash;
        wait(0.25);
    }
}
