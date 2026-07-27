// Type 4
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a;
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n - row; column++)
        {
            printf(" ");
        }
        for (int column = 1; column <= row; column++)
        {
            printf("%c", column + 64);
        }
        printf("\n");
    }
}