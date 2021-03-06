#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

/*Function to decode resistor codes */   
int  decode( char code );

/*Calculate the resistance value */
int resistor4(char c1,char c2,char c3,char c4){        
    int  resistance=-1;
    int  color1, color2, color3;      
        
        color1 = decode( c1 );
        color2 = decode( c2 );
        color3 = decode( c3 );

        if ( color1 == -999  ||  color2 == -999  ||
          color3 == -999 ){
          printf( "\n\n\tINVALID CODE\n" );}
     
        else {
          resistance = ( 10 * color1  +  color2 )* pow( 10, color3 );
          printf( "\n\nResistance value :%d", resistance );
          printf("ohms\n");
        }
        return resistance;       
}

/*Decode the resistance codes */
int decode( char code )
{
     switch ( code ) {
     case 'B':
          return 0;
     case 'N':
          return 1;
     case 'R':
          return 2;
     case 'O':
          return 3;
     case 'Y':
          return 4;
     case 'G':
          return 5;
     case 'E':
          return 6;
     case 'V':
          return 7;
     case 'A':
          return 8;
     case 'W':
          return 9;
     default:
          return -999;     
     }
}

