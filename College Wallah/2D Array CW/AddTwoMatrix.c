// Do it without using extra matrix
#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of column : ");
    scanf("%d", &c);
    int arr1[r][c], arr2[r][c];
    printf("Enter the elements of first matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix : \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr1[i][j] += arr2[i][j];
        }
    }
    printf("Result after addition : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}