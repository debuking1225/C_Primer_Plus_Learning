#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
int main(void)
{
    int ch;
    unsigned int lower_count = 0, upper_count = 0;
    printf("please enter some text:\n");
    while((ch = getchar()) != EOF)
    {
        if (islower(ch))
        {
            lower_count++;
        }
        else if (isupper(ch))
        {
            upper_count++;
        }
    }
    printf("There are %u lower case letters and %u upper case letters in the input.\n", lower_count, upper_count);
    return 0;   
}
