#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define CHAR '#'

void show(int ch, int cols, int rows);

int main(void)
{
    int i, j;

    printf("Please enter two numbers (q to quit): ");
    while (scanf("%d %d", &j, &i) == 2)
    {
        printf("Printing %c in %d rows and %d columns is:\n", CHAR, i, j);
        show(CHAR, j, i);
        printf("You can enter two numbers again (q to quit): ");
    }
    printf("Done.\n");

    return 0;  
}

void show(int ch, int cols, int rows)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            putchar(ch);
        putchar('\n');
    }
}