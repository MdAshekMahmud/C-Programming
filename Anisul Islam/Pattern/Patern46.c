// lecture 18 (Triangle star pattern) -> Type 14
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
            if (column == 1 || row == n || row == column)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}