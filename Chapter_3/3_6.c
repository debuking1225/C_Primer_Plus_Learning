#include <stdio.h>
int main()
{
    int height;
    printf("please input your height in inch: ");
    scanf("%d", &height);
    printf("Your height is %d inch, and your height is %f cm.\n", height, height * 2.54);
    return 0;
}