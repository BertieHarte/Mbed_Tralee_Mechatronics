// Remove all comments - as these are submitted with my answer!.
#include "mbed.h"
#include "iostream" // this is required for "cin" (user input from keyboard)

DigitalOut R(p23); //Red pin of RGB LED
DigitalOut G(p24); //Green pin of RGB LED
DigitalOut B(p25); //Blue pin of RGB LED
        char c; // initialise a variable of type char for the user intput.
//*NOTE THE RGB LED on the application board is "0" for on, "1" for off * NOTE //      
    
int main() {
    R = G = B = 1; 
    printf("Control the LED using keyboard. \n \r"); // print the messages below to terminal (\n = new line, \r = move to 1st pos on next line.)
        printf("R for Red, G for Green, B for Blue,W for White. \n \r");
        printf("O turn off all LEDs. \n \r");
    while(1) {
        
        cin >> c; // get user input and assign to the char variable "c" 
       if 
       (c == 'r') // if input = r, for red...
       {R = 0, G = 1, B = 1;} // turn red of RGB on, while turning Green & Blue off. ** SEE NOTE ABOVE **
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
