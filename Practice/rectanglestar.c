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
            printf("*");
        }
        printf("\n");
    }
}