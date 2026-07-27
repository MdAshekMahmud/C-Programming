// lectuure 17 (Rectangle Star) -> type 13
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
            if (row == 1 || row == n || column == 1 || column == n)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}