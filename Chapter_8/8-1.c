#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    int ch, count = 0;
    printf("please entere some text:\n");
    while ((ch = getchar()) != EOF)
    {
        count++;
    }
    printf("There are %d characters in the input.\n", count);
    return 0;   
}
