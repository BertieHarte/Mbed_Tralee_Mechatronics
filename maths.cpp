#include "mbed.h"
int a = 10;
int b = 20;
int c = 30;


int main() {
    int d = (a + b);
    printf("d = a + b, d = %d \n", d);
    int e = (d - c);
    printf("e = d - c, e = %d \n", e);
    }
