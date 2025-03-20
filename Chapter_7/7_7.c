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
int main(void)
{
    printf("please input your working hours per week\n");
    float hours = 0.0;
    while(scanf("%f", &hours) == 1)
    {
        float salary = 0.0;
        if (hours <= OVERTIME_THRESHOLD)
        {
            salary = hours * BASIC_SALARY;
        }
        else
        {
            salary = OVERTIME_THRESHOLD * BASIC_SALARY + (hours - OVERTIME_THRESHOLD) * OVERTIME_RATE * BASIC_SALARY;
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
