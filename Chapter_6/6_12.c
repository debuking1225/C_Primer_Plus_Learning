#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
double infinite_series(int terms)
{
    double sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}
double infinite_series_alternative(int terms)
{
    double sum = 0;
    for (int i = 1; i <= terms; i++)
    {
        sum += 1.0 / i  * pow(-1, i + 1);
    }
    return sum;
}
int main(void)
{
    printf("Enter the times of terms: ");
    int terms;
    scanf("%d", &terms);
    while (terms >= 0)
    {
        printf("The sum of the first %d terms of the infinite series is %lf\n", terms, infinite_series(terms));
        printf("The sum of the first %d terms of the infinite series is %lf\n", terms, infinite_series_alternative(terms));
        printf("Enter the times of terms: ");
        scanf("%d", &terms);
    }
    printf("Done\n");
    return 0;
}
