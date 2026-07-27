// Display the Geometric Progression (GP) - 3,12,48,...upto 'n' terms
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number:");
    scanf("%d", &n);
    int a = 3;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
    return 0;
}