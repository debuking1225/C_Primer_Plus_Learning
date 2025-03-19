#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
double difference_divided_by_product(double num1, double num2)
{
    return (num1 - num2) / (num1 * num2);
}
int main(void)
{
    printf("enter two numbers: ");
    double num1, num2;
    if (scanf("%lf %lf", &num1, &num2) == 2)
    {
        printf("The result of the difference between the two numbers divided by the product of the two numbers is: %lf\n", difference_divided_by_product(num1, num2));
        printf("enter two numbers: ");
    }
    else
    {
        printf("Invalid input, please enter two numbers: ");
        while (getchar() != '\n')
            continue;
    }
    return 0;   
}