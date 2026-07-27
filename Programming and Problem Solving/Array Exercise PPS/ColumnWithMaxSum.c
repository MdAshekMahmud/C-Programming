// 6. Write a C program to find the column with the maximum sum in a 2D array.
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter column : ");
    scanf("%d", &column);
    int arr[row][column];
    printf("Enter the elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int maxSum = 0;
    int maxColumn = 0;
    for (int j = 0; j < column; j++)
    {
        int columnSum = 0;
        for (int i = 0; i < row; i++)
        {
            columnSum += arr[i][j];
        }
        if (columnSum > maxSum)
        {
            maxSum = columnSum;
            maxColumn = j + 1;
        }
    }
    printf("The column with the maximum sum is: Column %d\n", maxColumn);
    printf("Maximum sum is: %d\n", maxSum);

    return 0;
}