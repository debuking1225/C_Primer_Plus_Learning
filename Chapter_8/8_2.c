#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define SPACE_ASCII 32
int main(void)
{
    int ch, i = 0;

    printf("plsea enter some text:\n");
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n' || ch == '\t')
        {
            printf("'\\%c' - %d ", ch == '\n' ? (i = 0, 'n') : 't', ch);
        }
        else if (ch < SPACE_ASCII)
        {
            printf("'^%c' - %d ", ch + 64, ch);
        }
        else
        {
            printf("'%c' - %d ", ch, ch);
        }
        if (ch != '\n' && ++i % 10 == 0)
        {
            printf("\n");
        }
    }
    puts("Done.");
    return 0;   
}
