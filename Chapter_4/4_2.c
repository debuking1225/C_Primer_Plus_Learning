#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("please enter your first name and your last name\n");
    char first_name[20];
    char last_name[20];
    scanf("%s %s", first_name, last_name);
    printf("\"%s %s\"\n", first_name, last_name);
    printf("\"%20s %20s\"\n", first_name, last_name);
    printf("\"%-20s %-20s\"\n", first_name, last_name);
    printf("%*s %*s\n", (int)strlen(first_name) + 3, first_name, (int)strlen(last_name) + 3, last_name);
    return 0;
}