#include <stdio.h>
#include <string.h>
int main()
{
    printf("please enter your first name and your last name\n");
    char first_name[20];
    char last_name[20];
    scanf("%s %s", first_name, last_name);
    printf("%s,%s\n", first_name, last_name);
}