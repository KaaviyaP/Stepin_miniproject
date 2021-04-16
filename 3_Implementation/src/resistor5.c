#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

  
int  decodee( char code );


int resistor5(char c1,char c2,char c3,char c4,char c5){
   
       
    int  resistance=0;
    int  color1, color2, color3, color4;  
       
        
        color1 = decodee( c1 );
        color2 = decodee( c2 );
        color3 = decodee( c3 );
        color4 = decodee( c4 );
     
        if ( color1 == -999  ||  color2 == -999  ||
          color3 == -999 ||  color4 == -999){
          printf( "\n\n\tINVALID CODE\n" );}
     
        else {
          resistance = ( (100*color1)  +  (10*color2) + color3 )* pow( 10, color4 );
          printf( "\n\nResistance value :%d", resistance );
          printf("ohms\n");
        }
        return resistance;
        
}

    


int decodee( char code )
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

