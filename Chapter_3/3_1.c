#include <stdio.h>
int main()
{   
    int A;
    printf("please input a ASCII code: ");
    scanf("%d", &A);
    printf("The ASCII code %d corresponds to the character %c.\n", A, A);
    return 0;
}