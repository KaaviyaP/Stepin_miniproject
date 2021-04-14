#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

int capacitor(int code){
    
    int cvalue;
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
    printf("Capacitance value: %d", cvalue);
    printf("pF\n");
    return cvalue;
}


void    colorcodes( void );     
int  decode( char code );


int resistor(int band,char c1,char c2,char c3){
   
       
    int  resistance;
    int  color1, color2, color3;  
       
        
        color1 = decode( c1 );
        color2 = decode( c2 );
        color3 = decode( c3 );
     
        if ( color1 == -999  ||  color2 == -999  ||
          color3 == -999 ){
          printf( "\n\n\tBad code -- cannot compute resistance\n" );}
     
        else {
          resistance = ( 10 * color1  +  color2 )* pow( 10, color3 );
          printf( "\n\nResistance value :%d", resistance );
          printf("ohms\n");
        }
        return resistance;
        
}

    
void  colorcodes( void )
{
   
   printf( "Color\t\t\tCode\n\t" );
   printf( "-----\t\t\t----\n\n" );
   printf( "\tBlack------> B\n" );
   printf( "\tBrown------> N\n" );
   printf( "\tRed--------> R\n" );
   printf( "\tOrange-----> O\n" );
   printf( "\tYellow-----> Y\n" );
   printf( "\tGreen------> G\n" );
   printf( "\tBlue-------> E\n" );
   printf( "\tViolet-----> V\n" );
   printf( "\tGray-------> A\n" );
   printf( "\tWhite------> W\n" );
}


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