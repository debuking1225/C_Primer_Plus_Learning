#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char character = 'F';
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", character - j);
        }
        printf("\n");
    }
    return 0;   
}
