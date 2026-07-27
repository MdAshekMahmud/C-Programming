// 4. Write a C program to transpose a given 2D array
#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int array[rows][cols], transpose[cols][rows];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }
    printf("Transposed array:\n");
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }

    return 0;
}