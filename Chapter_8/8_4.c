#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    bool inword = false;
    int ch, word_count = 0, char_count = 0;

    printf("please enter some text:\n");

    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
        {
            continue;
        }
        if (isalpha(ch))
        {
            char_count++;
        }
        if (isspace(ch) && inword)
        {
            inword = false;
        }
        if (!isspace(ch) && !inword)
        {
            inword = true;
            word_count++;
        }
    }
    double count = (double)char_count / word_count;
    printf("There are %d characters and %d words in the input.\n", char_count, word_count);
    printf("The average number of letters per word is %.2f.\n", count);
    return 0;   
}
