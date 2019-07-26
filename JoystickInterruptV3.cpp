// https://os.mbed.com/users/BertieHarte/code/JoystickInteruptV1/file/88e7f11ee476/main.cpp/

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
float debounce(0.5); // delay 0.5s for mechanical bounce on switch contacts (quick and dirty solution).
// functions for response to the interrupts, print message to terminal. 
void left() {
   printf("Joystick Left \n \r"); // print, (n)ew line, (r)eturn to start pos of new line 
   wait(debounce);  // wait the value in float above.
}

void right() {
    printf("Joystick Right \n \r");
    wait(debounce);    
}
 
void up() {
    printf("Joystick Up \n \r");
    wait(debounce);
}

void down() {
    printf("Joystick Down \n \r");
    wait(debounce);    
}

void centre() {
    printf("Joystick Centered \n \r");
    wait(debounce);
}

int main() {
    l.rise(&left);  // attach the address of the (left in this line) functions to the interrupt rising edge. 0->1
    r.rise(&right);  
    u.rise(&up);
    d.rise(&down);   
    c.rise(&centre);     
    while(1) {          
    }
}
