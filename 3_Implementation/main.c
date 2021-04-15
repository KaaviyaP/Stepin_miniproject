#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "timer_calculator.h"

#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
int calculator_operation = 0;
int r=0;

/* Operands on which calculation is performed */
char code1 = ' ';
char code2 = ' ';
char code3 = ' ';
char code4 = ' ';
char code5 = ' ';
int band=0;
int code = 0;
char cc=' ';
/* Valid operations */
enum operations{ RESISTOR4=1,RESISTOR5, CAPACITOR, PULSE, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. 4_Band_Resistor \n2. 5_Band_Resistor \n3. Capacitor\n4. Pulse\n5. Exit");
    printf("\n\tEnter your choice\n");
   
     
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        if(calculator_operation== RESISTOR4){
            
            printf("\n\tEnter your 4 bands with space between them\n");
            scanf("%c",&cc);
            scanf("%c %c %c %c",&code1,&code2,&code3,&code4); 
            
            
                 
        }
        else if(calculator_operation== RESISTOR5){
            
                printf("\n\tEnter your 5 bands with space between them\n");
                scanf("%c",&cc);
                scanf("%c %c %c %c %c",&code1,&code2,&code3,&code4, &code5); 
        }
        else if(calculator_operation==CAPACITOR){
            printf("\n\tEnter your code\n");
            
            scanf("%d", &code);
        }
        else if(calculator_operation==PULSE){
            printf("\n\tEnter your 4 rcodes and C with space between them\n");
           scanf("%c",&cc);
            scanf("%c %c %c %c %d", &code1,&code2,&code3,&code4,&code); 
        }
        
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case RESISTOR4:
            printf("\n\tResistance = %d\nEnter to continue",resistor4(code1, code2, code3,code4));
            getchar();
            break;
        case RESISTOR5:
            printf("\n\tResistance = %d\nEnter to continue",resistor5(code1, code2, code3,code4,code5));
            getchar();
            break;
        case CAPACITOR:
            printf("\n\tCapacitance = %d\nEnter to continue",capacitor( code));
           
            getchar();
            break;
        case PULSE:
           printf("\n\tPulse Width = %f\nEnter to continue",pulse( code1, code2, code3,code4, code));
            
            getchar();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((RESISTOR4 <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}