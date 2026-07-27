// Display the Geometric Progression (GP) - 1,2,4,8,16,32,...upto 'n' terms
//  GP  an = ar^(n-1)
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number:");
    scanf("%d", &n);
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }

    return 0;
}