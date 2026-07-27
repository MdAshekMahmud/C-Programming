// lecture 2 (Type 2)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int row = n; row >= 0; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%d", column);
        }
        printf("\n");
    }
}