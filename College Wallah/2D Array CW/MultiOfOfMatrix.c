#include <stdio.h>
int main()
{
    int r1, c1;
    printf("Enter the number of row for first matrix : ");
    scanf("%d", &r1);
    printf("Enter the number of column for first matrix : ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    printf("Enter element of first matrix : \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter element at [%d] [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    int r2, c2;
    printf("Enter the number of row for second matrix : ");
    scanf("%d", &r2);
    printf("Enter the number of column for second matrix : ");
    scanf("%d", &c2);
    int arr2[r2][c2];
    printf("Enter element of second matrix : \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter element at [%d] [%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Matrix can't be multiplied\n");
    }
    else
    {
        int resultant[r1][c2];
        int cr = c1;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                resultant[i][j] = 0;
                // i row of arr1 , j column of arr2
                for (int k = 0; k < cr; k++)
                {
                    resultant[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("The resultant matrix is : ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", resultant[i][j]);
            }
            printf("\n");
        }
    }
}
