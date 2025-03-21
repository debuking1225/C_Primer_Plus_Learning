#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

double min(double x, double y);

int main(void)
{
    double x, y;
    printf("Enter two numbers: ");
    while(scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The smaller number is %g.\n", min(x, y));
        printf("Enter two numbers: ");
    }
    printf("Done.\n");
    return 0;   
}

double min(double x, double y)
{
    return x < y ? x : y;
}
