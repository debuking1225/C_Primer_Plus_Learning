#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    char ch[255];
    int i = 0;
    printf("Please enter a string: ");
    while (i < 254 && (ch[i] = getchar()) != '\n')
    {
        i++;
    }
    ch[i] = '\0';
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", ch[j]);
    }
    return 0;   
}
