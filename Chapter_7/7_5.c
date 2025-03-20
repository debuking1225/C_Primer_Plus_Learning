#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please input some text, end with #:\n");
    char ch;
    int replace_count = 0;
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                replace_count++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                replace_count++;
                break;
            default:
                putchar(ch);
                break;
        }    
    }
    printf("\nreplace_count: %d\n", replace_count);
    return 0;   
}
