#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void chline(char ch, int i, int j);

int main(void)
{
    int i, j;
    char ch;
    printf("Please enter a character: ");
    ch = getchar();
    printf("Please enter two integers: ");
    scanf("%d %d", &i, &j);
    chline(ch, i, j);
    return 0;   
}

void chline(char ch, int i, int j)
{
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
