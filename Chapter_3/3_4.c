#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Your age in seconds is %e.\n", age * 3.156e7);
    return 0;
}