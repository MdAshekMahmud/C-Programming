// Type 1
#include <stdio.h>
int main()
{
    int n, row, column;
    printf("The number of : ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
    return 0;
}