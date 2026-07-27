// 3. Write a C program to find the sum of each row and each column in a 2D array.
#include <stdio.h>
int main()
{
    int rows, column;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int array[rows][column];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element  [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++)
    {
        int SumofROW = 0;
        for (int j = 0; j < column; j++)
        {
            SumofROW += array[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, SumofROW);
    }

    printf("Sum of each column:\n");
    for (int j = 0; j < column; j++)
    {
        int SumofColumn = 0;
        for (int i = 0; i < rows; i++)
        {
            SumofColumn += array[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, SumofColumn);
    }
    return 0;
}