// Find out the min element  in element  a 2D array and is index
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int m;
    printf("Enter m : ");
    scanf("%d", &m);
    int arr[n][m], min = INT_MAX;
    int minRow = -1, minCol = -1;
    printf("Enter the elements of the matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element at [%d] and [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    printf("\nThe minimum element is %d\n", min);
    printf("The index of the minimum element is [%d][%d]\n", minRow, minCol);
}