// 7. Write a C program to search for an element in a 2D array
#include <stdio.h>
int main()
{
    int row, column, y, x = 0;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter collumn : ");
    scanf("%d", &column);
    int arr[row][column];

    printf("Enter the elements of array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element of [%d] [%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Search element : ");
    scanf("%d", &y);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == y)
            {
                printf("Element  %d found at position %d %d ", y, i, j);
                x = 1;
            }
        }
    }
    if (x == 0)
    {
        printf("The element %d is not in array", y);
    }
    return 0;
}