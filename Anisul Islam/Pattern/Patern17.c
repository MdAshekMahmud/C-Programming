// Type 3
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a;
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%c", row + 64);
        }
        printf("\n");
    }
    for (int row = n - 1; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%c", row + 64);
        }
        printf("\n");
    }
}