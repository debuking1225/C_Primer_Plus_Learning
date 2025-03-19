#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("Enter eight numbers: ");
    int numbers[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int j = 7; j > 0; j--)
    {
        printf("%d ", numbers[j]);
    }
    return 0;   
}
