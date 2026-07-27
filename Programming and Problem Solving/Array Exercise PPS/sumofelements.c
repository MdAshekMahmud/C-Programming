// 2. Write a C program to find the sum of all elements in a 2D array.
#include <stdio.h>
int main()
{
    int row, column;
    int sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int array[row][column];
    printf("Enter elements of the array:\n");
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= column - 1; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }
    printf("%d", sum);

    return 0;
}