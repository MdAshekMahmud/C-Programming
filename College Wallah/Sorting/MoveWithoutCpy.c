/*Given an integer array, move all 0's to the end of it while maintaining
the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.*/
/*GeeksForGeeks Problem*/
#include <stdio.h>

int main()
{
    int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}