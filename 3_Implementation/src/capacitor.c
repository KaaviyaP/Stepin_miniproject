#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

int capacitor(int code){
    
    int cvalue=0;
    if(code>=999 || code<=0){
        printf("INVALID INPUT");
    }
    else if(code>0 && code<=99){
        cvalue=code;
    }
    else{
        int mul=code%10;
        int dig=code/10;
        cvalue=dig*pow( 10, mul );
    }
    printf("\n\nCapacitance value: %d", cvalue);
    printf("pF\n");
    return cvalue;
}
