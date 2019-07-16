//Write a program to turn on LED if analog value from any of the potentimeter is greater than 50% and turn it off when the value is less than or equal to 50%. 
//copy and paste the final code you have in the answer section.
// as ever, remove the comments.
#include "mbed.h"

DigitalOut R(p23); //Red pin of RGB LED
DigitalOut G(p24); //Green pin of RGB LED
DigitalOut B(p25); //Blue pin of RGB LED
AnalogIn pot1(p19);// input from pot 1
AnalogIn pot2(p20);// input from pot 2
void on(){ // function to turn on white LED
       R = G = B = 0;
        }
        
void off(){ // function to turn off white led
       R = G = B = 1;
        }   
             
int main() {
            R = G = B = 1; // init RGB led to off (all 1)
    while(1) {
        float p1 = (pot1*100); // converts the pot reading to % (multiple by 100)
        float p2 = (pot2*100); // converts the pot reading to % (multiple by 100)
 //       printf("pot1 value = %f \n \r", p1);
 //       printf("pot2 value = %f \n \r", p2);
    if(p1 >50 || p2 >50){ // if value of p1 OR p2 > 50
              on(); // call function "on"
              }
              else
              {
               off(); // call function "off"
               }
    }
}
