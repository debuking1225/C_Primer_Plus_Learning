#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    double array1[8];
    double array2[8];
    double sum1 = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("Please enter a double number: ");
        scanf("%lf", &array1[i]);
        sum1 += array1[i];
        array2[i] = sum1;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%lf ", array1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%lf ", array2[i]);
    }
    printf("\n");
    return 0;   
}
