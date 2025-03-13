#include <stdio.h>
int main()
{
    int a = 0;
    printf("please enter water kuatuo: ");
    scanf("%d", &a);
    printf("The number of water molecules in %d kuatuo is %e\n", a, a * 950 / 3.0e-23);
    return 0;
}