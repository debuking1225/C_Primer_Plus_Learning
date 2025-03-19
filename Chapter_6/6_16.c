#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    int years;
    double Daphne = 100.0, Deirdre = 100.0;
    for (years = 0; Daphne >= Deirdre; years++)
    {
        Daphne += 100.0 * 0.1;
        Deirdre += Deirdre * 0.05;
    }
    printf("After %d years, Deirdre's investment exceeds Daphne's investment.\n", years);
    return 0;   
}
