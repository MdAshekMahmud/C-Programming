// Find the sum of a given matrix of n x m.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int m;
    printf("Enter m : ");
    scanf("%d", &m);
    int arr1[n][m], sum = 0;
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr1[i][j];
        }
    }
    printf("%d", sum);
}