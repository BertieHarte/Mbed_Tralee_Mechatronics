// Remove these comments before you post the answer!
// copy&paste to mbed compiler.
// add "." (mbedh) to tell compiler that it requires mbed.h file. 
// add semi-colon (int a = 10 )
// use lower case b as as int c = a +b; this calls the lower case (int B = 20;)
// add semi-colon (int c = a + b)
// He is also looking for the result of the program, so you can copy it from teraterm.
// Remove the comments before you post the answer!
#include "mbed.h" 
int a = 10; 
int b = 20; 
int main() {
    int c = a + b; 
    printf("the final answer = %d\n", c);
}
