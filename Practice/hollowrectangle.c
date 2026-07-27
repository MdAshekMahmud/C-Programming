#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int column;
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                printf("*");
            }
            else
            {
                if (j == 0 || j == column - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}