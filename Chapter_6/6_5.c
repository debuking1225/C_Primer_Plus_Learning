#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char ch;
    printf("Please enter a character: ");
    scanf("%c", &ch);
    while((getchar()) != '\n');
    int num = ch;
    int i, j;
    if (num >= 65 && num <= 90)
    {
        for (j = 65; j <= num; j++)
        {
            for(int k = num - j; k >= 0; k--)
            {
                printf(" ");
            }
            for(i = 65; i <= j; i++)
            {
                printf("%c", i);
            }
            for(i = j - 1; i >= 65; i--)
            {
                printf("%c", i);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input.\n");
        printf("Please enter a character between A and Z.\n");
    }
    return 0;
}
