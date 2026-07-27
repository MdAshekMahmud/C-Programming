/*Write a program to add two matrices.*/
#include <stdio.h>
int main()
{
    int r1;
    printf("Enter the number of row of 1st matrix : ");
    scanf("%d", &r1);
    int c1;
    printf("Enter the number of column of 1st matrix : ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    printf("Enter the elements of 1st matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[r1][c1];
    printf("Enter the elements of 2nd matrix : \n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Result after addition : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}