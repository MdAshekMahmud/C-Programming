#include <stdio.h>
int main()
{
    int arr1[4][2] = {{1234, 56}, {1256, 43}, {1434, 32}, {1312, 96}};
    int arr2[4][2] = {1234, 56, 1256, 43, 1434, 32, 1312, 96};
    int arr3[2][3] = {12, 34, 56, 78, 91, 23};
    int arr4[][3] = {12, 34, 56, 78, 91, 23};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr4[i][j]);
        }
        printf("\n");
    }
}