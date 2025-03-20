#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please input some text, end with #:\n");
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#')
    {
        count++;
        printf("%c-%d ", ch, ch);
        if ((count % 8 == 0) && (count != 0))
        {
            printf("\n");
        }
        
           
    }
    return 0;      
}
