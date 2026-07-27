#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int column;
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= column; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == column)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}