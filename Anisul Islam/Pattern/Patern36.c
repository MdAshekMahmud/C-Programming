// Type 7
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
        for (int column = 1; column <= 2 * row - 1; column++)
        {
            printf("%c", column + 64);
        }
        printf("\n");
    }
}