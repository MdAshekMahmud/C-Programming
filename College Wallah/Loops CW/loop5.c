// Display this Arethmatic Progression (AP) - 1,3,5,7,9,...upto 'n' terms.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}