// Write a C program to find the minimum element in a 2D array
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter column : ");
    scanf("%d", &column);
    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at [%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int min = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("%d\n", min);
    return 0;
}
