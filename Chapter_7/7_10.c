#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define TAX_RATE1 0.15
#define TAX_RATE2 0.28
int main(void)
{
    float taxes, wages, stage_wage;
    int option;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to select tax category:\n");
    printf("1) Single\n");
    printf("2) Head of Household\n");
    printf("3) Married, Joint\n");
    printf("4) Married, Separate\n");
    printf("5) Quit\n");
    printf("*****************************************************************\n");
    while (scanf("%d", &option) == 1)
    {
        if (option == 5)
            break;
        switch (option)
        {
        case 1:
            stage_wage = 17850;
            break;
        case 2:
            stage_wage = 23900;
            break;
        case 3:
            stage_wage = 29750;
            break;
        case 4:
            stage_wage = 14875;
            break;
        default:
            printf("Please enter the correct number.\n");
            break;
        }
        if (option == 1 || option == 2 || option == 3 || option == 4)
        {
            printf("Please enter your wages: ");
            scanf("%f", &wages);
            if (wages <= stage_wage)
                taxes = wages * TAX_RATE1;
            else
                taxes = stage_wage * TAX_RATE1 + (wages - stage_wage) * TAX_RATE2;
            printf("Your taxes is %.2f.\n", taxes);
        }
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to select tax category:\n");
        printf("1) Single\n");
        printf("2) Head of Household\n");
        printf("3) Married, Joint\n");
        printf("4) Married, Separate\n");
        printf("5) Quit\n");
        printf("*****************************************************************\n");
    }
    return 0;   
}
