// Type 1
#include <stdio.h>
int main()
{
    int n;
    printf("The number of row : ");
    scanf("%d", &n);
    int x;
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column % 2 == 0)
                x = 0;
            else
                x = 1;
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}