// 9. Write a C program to add two 2D arrays and display the result
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter column : ");
    scanf("%d", &column);
    int arr[row][column], arr2[row][column], sum[row][column];

    printf("Enter the elements of first Array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the elements of second Array : \n");
    for (int x = 0; x < row; x++)
    {
        for (int y = 0; y < column; y++)
        {
            printf("Enter element at [%d] and [%d] : ", x, y);
            scanf("%d", &arr2[x][y]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("Result after addition : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}