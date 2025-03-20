#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please input some text and end with #\n");
    char ch = 'a';
    char ch_pre = 'a';
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch_pre == 'e' && ch == 'i')
        {
            count++;
        }
        ch_pre = ch;
    }
    printf("The number of 'ei' is %d\n", count);
    return 0;   
}
