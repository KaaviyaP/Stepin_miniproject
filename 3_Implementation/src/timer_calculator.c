#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"



double pulse4(char c1,char c2,char c3,char c4,int code){
    
    double t;
    int R=(resistor4(c1,c2,c3,c4))/1000;
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

double pulse5(char c1,char c2,char c3,char c4,char c5,int code){
    
    double t1;
    int R1=(resistor5(c1,c2,c3,c4,c5))/1000;
    int C1=(capacitor(code))/1000000;
    t1=((1.1) *R1*C1);
    
     printf("    _ _ _ _ _ _ _ \n");
     printf("   |             |\n");
     printf("_ _|             |_ _\n");
     printf("    Pulse width:\n");
     printf("    %f",t1);
     printf(" ms");
    return t1;
}