#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void printName(int c);
int doAgain(void);
double getUSValue(int c);
void printHelpMessage(void);
double convertCurrency(double amount, int fromCode, int toCode);
void printResult(double convertedAmount, double fromAmount, int fromCode, int toCode);

int main(void)
{
    int fromCode, toCode;
    double fromAmount, convertedAmount;

    printf("Welcome to CConvert 1.0.\n");

    do {
        printHelpMessage();
        int c = 3;
        printName(c);



        convertedAmount = convertCurrency(fromAmount,fromCode,toCode);
        printResult(convertedAmount,fromAmount,fromCode,toCode);
    }
    while(doAgain() == TRUE);
}

void printName(int c)
{
    char name[25];
    switch(c)
    {
        case 1:
            strcpy(name, "US Dollars");
            break;
        case 2:
            strcpy(name, "Canadian Dollars");
            break;
        case 3:
            strcpy(name, "Euros");
            break;
        case 4:
            strcpy(name, "Italian Liras");
            break;
        case 5:
            strcpy(name, "Deutsche Mark");
            break;
        default:
            strcpy(name, "Invalid");
    }
    printf("%s", name);
    
}

void printHelpMessage(void)
{
    printf("1=USD, 2=CAD,3=EUR,4=ITL,5=DEM\n");
}

int doAgain(void)
{
    printf("Do you wish to convert again? (Y/N)\n");
    int result;
    char selection;
    scanf("%c", &selection);
    if(selection == 'Y')
    {
        result = TRUE;
    }
    else if(selection == 'N')
    {
        result = FALSE;
    }
    return result;
}
