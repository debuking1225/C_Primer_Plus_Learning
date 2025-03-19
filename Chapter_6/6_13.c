#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    int square_[9];
    int i;
    for (i = 0; i < 9; i++)
    {
        square_[i] = i * i;
    }
    int j = 0;
    do
    {
        printf("%d ", square_[j]);
        j++;
    } while (j < 9);
    
    return 0;   
}
