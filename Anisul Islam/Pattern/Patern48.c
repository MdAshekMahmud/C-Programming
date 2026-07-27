// lecture 20 (Floyd's Triangle) -> Type 16
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int count = 0;
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
    return 0;
}