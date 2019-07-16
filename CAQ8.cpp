// Write a program to toggle the LEDs every 1 second on the application board in the following order repeatedly. 

// GREEN  -> RED  -> BLUE  -> ALL OFF 
// I've used functions for each of the LED colours, the main then calls the fucntions in the order specified in the question.
//It's overkill, but I wanted to practive functions.
// I've also created a variable 't' for the time delay of 1 sec, and this is called by each function - a single change to 't' 
// will change the delay in each function.
//a simple alternative would be to sequnece each colour in the main - I'll post that solution as well.
// DELETE the comments!
#include "mbed.h"
DigitalOut R(p23); //Red pin of RGB LED

DigitalOut G(p24); //Green pin of RGB LED

DigitalOut B(p25); //Blue pin of RGB LED

int t = 1; // initialise a variable of type int, for time delay 1 sec - makes system wide change easier as changing the value in int t will apply to all fucntions. .
//*NOTE THE RGB LED on the application board is "0" for on, "1" for off * NOTE //      

void r(){ // led function red on       

R = 0, G = B = 1;       

wait(t); // takes the value from the int above    

}

void g(){ // led function green on       

G = 0, R = B = 1;       

wait (t);   

}   

void b(){ // led function blue on       

B = 0, R = G = 1;       

wait (t);     

}      

void o(){ // led function all off       

B =  R = G = 1;       

wait (t);     

}

int main() { // main program, will use this to call up the led functions.   

R = G = B = 1; // init led to off on start up
    while(1) { // do forever      

g(); // call the colour functions in the order specified in the question.     G-R-B-O

r();     

b();     

o();                   

}

}
