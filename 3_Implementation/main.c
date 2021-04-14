#include <stdio.h>
#include "timer_calculator.h"

#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
char code1 = ' ';
char code2 = ' ';
char code3 = ' ';
int band=0;
int code = 0;

/* Valid operations */
enum operations{ RESISTOR=1, CAPACITOR, PULSE, EXIT };

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
    printf("\n1. Resistor\n2. Capacitor\n3. Pulse\n4. Exit");
    printf("\n\tEnter your choice\n");
   
     
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        if(calculator_operation== RESISTOR){
            printf("\n\tEnter your values with space between them\n");
           
            scanf("%d %c %c %c", &band,&code1,&code2,&code3); 
        }
        else if(calculator_operation==CAPACITOR){
            printf("\n\tEnter your code\n");
            
            scanf("%d", &code);
        }
        else if(calculator_operation==PULSE){
            printf("\n\tEnter your values with space between them\n");
           
            scanf("%d %c %c %c %d", &band,&code1,&code2,&code3,&code); 
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
        case RESISTOR:
            printf("\n\tResistance = %d\nEnter to continue",resistor( band, code1, code2, code3));
            
            getchar();
            break;
        case CAPACITOR:
            printf("\n\tCapacitance = %d\nEnter to continue",capacitor( code));
           
            getchar();
            break;
        case PULSE:
           printf("\n\tPulse Width = %f\nEnter to continue",pulse(band, code1, code2, code3, code));
            
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
    return ((RESISTOR <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}