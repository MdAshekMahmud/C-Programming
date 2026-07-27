// Display this AP - 4,7,10,13,16,... upto 'n' terms
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 4; i <= 3 * n + 1; i += 3)
    {
        printf("%d ", i);
    }
    return 0;
}