#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please input some text, end with #:\n");
    char ch;
    int count_space = 0;
    int count_newline = 0;
    int count_other = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            count_space++;
        else if (ch == '\n')
            count_newline++;
        else
            count_other++;
    }
    printf("count_space = %d, count_newline = %d, count_other = %d\n", count_space, count_newline, count_other);
    return 0;   
}
