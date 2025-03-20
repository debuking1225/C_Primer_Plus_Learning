#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please enter a positive integer\n");
    int num, i, j;
    bool sign;
    while(scanf("%d", &num) == 1)
    {
        printf("prime numbers less than or equal to %d are:\n", num);
        for (i = 2; i <= num; i++)
        {
            sign = 0;
            for (j = 2; j * j <= i; j++)
            {
                if (i % j == 0 && i != j)
                {
                    sign = 1;
                    break;
                }
            }
            if (sign == 0)
            {
                printf("%d\n", i);
            }
        }
        printf("\n");
        printf("please enter a positive integer\n");
    }
}
