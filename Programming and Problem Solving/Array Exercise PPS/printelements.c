// 1. Write a C program to read and print elements of a 2D array.
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int array[row][column];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}