#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char word_[100];
    printf("please enter a word: ");
    scanf("%99s", word_);
    int length = strlen(word_);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", word_[i]);
    }
    return 0;   
}
