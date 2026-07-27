// 10. Write a C program to multiply two 2D arrays (matrices) and display the result
#include <stdio.h>
int main()
{
    int row1, column1, row2, column2;
    printf("Enter row of first matrix : ");
    scanf("%d", &row1);
    printf("Enter column of first matrix : ");
    scanf("%d", &column1);
    int arr[row1][column1];
    printf("Enter row of second matrix : ");
    scanf("%d", &row2);
    printf("Enter column of second matrix : ");
    scanf("%d", &column2);
    int arr[row2][column2];

    if (column1 != row2)
    {
        printf("Can't be multiplied. ");
    }
    else
    {
        printf("Enter the elements of first Array : \n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("Enter element at [%d] and [%d] : ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        printf("Enter the elements of second Array : \n");
        for (int x = 0; x < row2; x++)
        {
            for (int y = 0; y < column2; y++)
            {
                printf("Enter element at [%d] and [%d] : ", x, y);
                scanf("%d", &arr2[x][y]);
            }
        }
        int x = row;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column; j++)
            {
                sum[row][column] = 0;
                for (int k = 0; k < x; k++)
                {
                    sum[i][j] += arr[x][j] * arr2[i][x];
                }
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
    }

    return 0;
}