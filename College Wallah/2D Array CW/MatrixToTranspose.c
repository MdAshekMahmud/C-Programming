// Write a program to change the given n x n matrix to it's transpose.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n][n];
    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element at [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}