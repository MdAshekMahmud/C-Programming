// lecture 19 -> Type 15
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            if (row == column || row + column == n + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}