// 8. Write a C program to calculate the sum of the diagonal elements of a square matrix
#include <stdio.h>
int main()
{
    int row, column, sum = 0;
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
            printf("Enter element of [%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
}