// Type 19
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n - row; column++)
        {
            printf(" ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("%d", column);
        }
        for (int column = row - 1; column >= 1; column--)
        {
            printf("%d", column);
        }
        printf("\n");
    }
    for (int row = n - 1; row >= 1; row--)
    {
        for (int column = 1; column <= n - row; column++)
        {
            printf(" ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("%d", column);
        }
        for (int column = row - 1; column >= 1; column--)
        {
            printf("%d", column);
        }
        printf("\n");
    }
}