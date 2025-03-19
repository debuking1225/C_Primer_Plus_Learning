#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;
    int j = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", lets[j]);
        }
        printf("\n");
    }
    return 0;   
}
