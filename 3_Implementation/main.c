#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

#define VALID   (1)
#define INVALID (0)

/* Operation requested by user*/
int operation = 0;
int r=0;


char code1 = ' ';
char code2 = ' ';
char code3 = ' ';
char code4 = ' ';
char code5 = ' ';
int band=0;
int code = 0;
char cc=' ';

/* Valid operations */
enum operations{ RESISTOR4=1,RESISTOR5, CAPACITOR, PULSE4, PULSE5, EXIT };

/* Display the menu of operations supported */
void menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        menu();
    }
}

/*Displays the menu */
void menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. 4_Band_Resistor \n2. 5_Band_Resistor \n3. Capacitor\n4. Pulse width with 4 band resistor \n5. Pulse width with 5 band resistor \n6. Exit");
    printf("\n\tEnter your choice\n");
   
     
    scanf("%d", &operation);

    if(EXIT == operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(operation))
    {
        if(operation== RESISTOR4){

            printf( "\tColor     Code\n\t" );
            printf( "-------------\n" );
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
            
            printf("\n\tEnter your 4 bands with space between them\n");
            scanf("%c",&cc);
            scanf("%c %c %c %c",&code1,&code2,&code3,&code4); 
            
            
                 
        }
        else if(operation== RESISTOR5){
            printf( "\tColor     Code\n\t" );
            printf( "-------------\n" );
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
            
                printf("\n\tEnter your 5 bands with space between them\n");
                scanf("%c",&cc);
                scanf("%c %c %c %c %c",&code1,&code2,&code3,&code4, &code5); 
        }
        else if(operation==CAPACITOR){
            printf("\n\tEnter your capacitor code\n");
            
            scanf("%d", &code);
        }
        else if(operation==PULSE4){
            printf( "\tColor     Code\n\t" );
            printf( "-------------\n" );
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

            printf("\n\tEnter your 4 resistor bands codes followed by capacitor code with space between them\n");
           scanf("%c",&cc);
            scanf("%c %c %c %c %d", &code1,&code2,&code3,&code4,&code); 
        }
        else if(operation==PULSE5){
            printf( "\tColor     Code\n\t" );
            printf( "-------------\n" );
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
            printf("\n\tEnter your 5 resistor bands followed by Capacitor code with space between them\n");
           scanf("%c",&cc);
            scanf("%c %c %c %c %c %d", &code1,&code2,&code3,&code4,&code5,&code); 
        }
        
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");     
        getchar();
        return;
        
    }
    switch(operation)
    {
        case RESISTOR4:
            printf("\n\t\nEnter to continue");
            resistor4(code1, code2, code3,code4);
            getchar();
            break;
        case RESISTOR5:
            printf("\n\t\nEnter to continue");
            resistor5(code1, code2, code3,code4,code5);
            getchar();
            break;
        case CAPACITOR:
            printf("\n\t\nEnter to continue");
            capacitor( code);
            getchar();
            break;
        case PULSE4:
            printf("\n\t\nEnter to continue\n");
            pulse4( code1, code2, code3,code4, code);
            getchar();
            break;
        case PULSE5:
             printf("\n\t\nEnter to continue\n");
            pulse5( code1, code2, code3,code4,code5, code);   
            getchar();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\n\t---INVALID---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((RESISTOR4 <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}