// Display this AP - 4,7,10,13,16,... upto 'n' terms
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number:");
    scanf("%d", &n);
    int a = 4;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + 3;
    }
    return 0;
}