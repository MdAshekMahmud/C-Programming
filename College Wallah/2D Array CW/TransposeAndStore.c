// Write a program to Print the transpose of the matrix entered by the user & Store itin aseparate matrix.
#include <stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    int column;
    printf("Enter the number of column : ");
    scanf("%d", &column);
    int arr[row][column];

    printf("Enter the elemens of the matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter elements at [%d],[%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nBefore transpose : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int arr2[column][row];
    printf("\nAfter transpose : \n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}