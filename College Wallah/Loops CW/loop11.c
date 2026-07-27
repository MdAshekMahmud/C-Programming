// Display this GP - 100,50,25,...upto 'n' terms
#include <stdio.h>
int main()
{
    float a = 100, i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%.2f ", a);
        a = 0.5 * a;
    }
}