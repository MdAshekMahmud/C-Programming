// Write a program to print the row number having the maximum sum in a given matrix.
#include <stdio.h>
#include <limits.h>
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
    int maxRow = INT_MIN;
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < column; j++)
        {
            rowSum += arr[i][j];
            if (rowSum > maxSum)
            {
                maxSum = rowSum;
                maxRow = i;
            }
        }
    }
    printf("The row with the maximum sum is Row : %d\n", maxRow);
    printf("Maximum sum is = %d\n", maxSum);
    return 0;
}