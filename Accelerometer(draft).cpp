#include "mbed.h"
#include "MMA7660.h"

MMA7660 MMA(p28, p27); 

float calculateAngle(float x, float y, float z)
    {
       float Angle =0;   
       float PI = 3.14159265;
       Angle = (atan(y/(sqrt((x*x)+(z*z)))))*(180/PI);
       return Angle;
    } 

int main() {
    while(1) 
    {
       float Angle =0;
       Angle = (calculateAngle(MMA.x(),MMA.y(),MMA.z())); 
       printf ("Angle = %f \n \r", Angle);
       wait(1);
    }
}
