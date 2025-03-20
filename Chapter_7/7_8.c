#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define BASIC_SALARY 1000
#define TAXRATE_300 0.15
#define TAXRATE_450 0.20
#define TAXRATE_REST 0.25
#define OVERTIME_HOURS 40
#define OVERTIME_RATE 1.5
#define OVERTIME_THRESHOLD 40
#define PAYRATE_1 8.75
#define PAYRATE_2 9.33
#define PAYRATE_3 10.00
#define PAYRATE_4 11.20
void print_star (int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main(void)
{
    char str[] = "Enter the number corresponding to the desired pay rate or action:";
    int length = sizeof(str) - 1;
    int choice = 0;
    int sign = 0;
    float hours = 0.0;
    float payrate = 0.0;
    print_star(length);
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.20/hr\n");
    printf("5) quit\n");
    print_star(length);
    while (scanf("%d", &choice) == 1)
    {
        switch (choice)
        {
            case 1:
                printf("You choose $8.75/hr\n");
                payrate = PAYRATE_1;
                sign = 1;
                break;
            case 2:
                printf("You choose $9.33/hr\n");
                payrate = PAYRATE_2;
                sign = 1;
                break;
            case 3:
                printf("You choose $10.00/hr\n");
                payrate = PAYRATE_3;
                sign = 1;
                break;
            case 4:
                printf("You choose $11.20/hr\n");
                payrate = PAYRATE_4;
                sign = 1;
                break;
            case 5:
                printf("You choose quit\n");
                break;
            default:
                printf("Please input a number between 1 and 5\n");
                break;
        }
        if (choice == 5)
        {
            break;
        }
        if (sign == 1)
        {
            printf("please input your working hours per week\n");
            break;
        }
    }
    while (sign == 1 && scanf("%f", &hours) == 1)
    {
        float salary = 0.0;
        if (hours <= OVERTIME_THRESHOLD)
        {
            salary = hours * payrate;
        }
        else
        {
            salary = OVERTIME_THRESHOLD * payrate + (hours - OVERTIME_THRESHOLD) * OVERTIME_RATE * payrate;
        }
        float tax = 0.0;
        if (salary <= 300)
        {
            tax = salary * TAXRATE_300;
        }
        else if (salary <= 450)
        {
            tax = 300 * TAXRATE_300 + (salary - 300) * TAXRATE_450;
        }
        else
        {
            tax = 300 * TAXRATE_300 + 150 * TAXRATE_450 + (salary - 450) * TAXRATE_REST;
        }
        printf("Your salary is %.2f, tax is %.2f, net salary is %.2f\n", salary, tax, salary - tax);
        printf("please input your working hours per week\n");
    }

    return 0;   
}