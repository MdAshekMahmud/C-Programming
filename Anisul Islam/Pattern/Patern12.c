// Type 2
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a;
    for (int row = n; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            printf("%c", column + 64);
        }
        printf("\n");
    }
}