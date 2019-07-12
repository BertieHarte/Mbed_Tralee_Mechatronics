#include "mbed.h"
//#include "stdio.h" // not required unless used getchar - in this example I'm not, as I'm using "cin".
#include "iostream" // this is required for "cin" (user input from keyboard)

DigitalOut R(p23); //Red pin of RGB LED
DigitalOut G(p24); //Green pin of RGB LED
DigitalOut B(p25); //Blue pin of RGB LED
        char c; // initialise a variable of type char for the user intput.
//*NOTE THE RGB LED on the application board is "0" for on, "1" for off * NOTE //      
    
int main() {
    while(1) {
        printf("Control the LED using keyboard. \n \r"); // print the messages below to terminal (\n = new line, \r = move to 1st pos on next line.)
        printf("R for Red, G for Green, B for Blue,W for White. \n \r");
        printf("O turn off all LEDs. \n \r");
        cin >> c; // get user input and assign to the char variable "c" (line 8 above)**requires #include "iostream" **
        printf("the key your pressed was %c. \n \r" ,(c)); // print the value of the key pressed, not required just to check tha thte inputs are being correctly received.
       if 
       (c == 'r') // if input = r, for red...
       {R = 0, G = 1, B = 1;} // turn red of RGB on, while turning Green & Blue off. ** SEE NOTE LINE 9 ABOVE **
       else if // if not the above...
       (c == 'g')
       {R = 1, G = 0, B = 1;} 
              else if // if not the above...
       (c == 'b')
       {R = 1, G = 1, B = 0;} 
              else if // if not the above...
       (c == 'w')
       {R = 0, G = 0, B = 0;}
              else if // if not the above...
       (c == 'o')
       {R = 1, G = 1, B = 1;}        
    }
}
