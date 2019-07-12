#include "mbed.h"
#include "C12832_lcd.h" 

AnalogIn ain(p19); // on the mbed board we have, this is also the potentiometer POT1
DigitalOut led(LED1); // BLUE LED on the mbed board
Serial pc(USBTX, USBRX); // tx, rx to the PC (serial monitor over usb)
C12832_LCD lcd; // this is use to allow the MBED to use the LCD screen on the applications board.
float temp; // creates a variable of type FLOAT (decimal number, we will use this later in the calculation.

int main() {
 int i=0;
 while (1){ // do forever
     temp = ain * 660 - 200; // this is the calculation of what the temperature is and is based on the information provided in the question.
 lcd.locate(0,0); // this means only one line is displayed on the LCD screen
 lcd.printf("temperature = %.2f C\n", temp); // print the result of the calculation to the LCD.
 pc.printf("temperature = %.3f C\n", temp);  // print the result of the calculation to the PC (Serial monitor).

while (temp > 295){
 //while 
 //    (i<60) i ++;
 for (i=0; i<20; i++)
     {
     led = !led; // toggle LED 1
     wait(1); // wait 1 second
      lcd.locate(0,0); // set start pos of LCD text
     lcd.printf("i = %d S\n", i);
 }
      i=0;
      temp = ain * 660 - 200;
}
}
}
