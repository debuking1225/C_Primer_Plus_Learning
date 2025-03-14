#include <stdio.h>
int main()
{
    float height;
    char name[20];
    printf("Enter your name and your height in inches\n");
    scanf("%s", name);
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height / 12);
}

   