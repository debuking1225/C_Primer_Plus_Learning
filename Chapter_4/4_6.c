#include <stdio.h>
#include <string.h>
int main()
{
    printf("please enter your fist name and last name\n");
    char first_name[20];    // first name
    char last_name[20];     // last name        
    scanf("%s", first_name);
    scanf("%s", last_name); 
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", (int)strlen(first_name), (int)strlen(first_name), (int)strlen(last_name), (int)strlen(last_name));
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", (int)strlen(first_name), (int)strlen(first_name), (int)strlen(last_name), (int)strlen(last_name));
    return 0;
}