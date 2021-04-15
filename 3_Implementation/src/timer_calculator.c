#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"



double pulse(int band,char c1,char c2,char c3,int code){
    
    double t;
    int R=(resistor(band,c1,c2,c3))/1000;
    int C=(capacitor(code))/1000000;
    t=((1.1) *R*C);
    
     printf("    _ _ _ _ _ _ _ \n");
     printf("   |             |\n");
     printf("_ _|             |_ _\n");
     printf("    Pulse width:\n");
     printf("    %f",t);
     printf(" ms");
    return t;
}