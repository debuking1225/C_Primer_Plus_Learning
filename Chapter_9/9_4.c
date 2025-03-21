#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

double harmonic_mean(double a, double b);

int main(void)
{
    printf("please enter to number which you want to calculate the harmonic mean: ");
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("The harmonic mean of %lf and %lf is %lf\n", a, b, harmonic_mean(a, b));
        printf("You can enter two numbers again (q to quit): ");
    }
    printf("Done.\n");
    return 0;
}

double harmonic_mean(double a, double b)
{
    return 2 / (1 / a + 1 / b);
}
