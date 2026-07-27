// Find out the max element  in element  a 2D array and it's index
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
    int arr[n][m], max = INT_MIN;
    int maxRow = INT_MIN, maxCol = INT_MIN;
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
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    printf("\nThe maximum element is %d\n", max);
    printf("The index of the maximum element is [%d][%d]\n", maxRow, maxCol);
}