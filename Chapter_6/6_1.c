#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char alphabet[26];
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'a' + i;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", alphabet[i]);
    }
    return 0;   
}

