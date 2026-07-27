/*Given an integer array, move all 0's to the end of it while maintaining
the relative order of the non-zero elements.*/
#include <stdio.h>

int main()
{
    int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int ans[9];
    int Index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            ans[Index] = arr[i];
            Index++;
        }
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         ans[Index] = arr[i];
    //         Index++;
    //     }
    // }

    while (Index != 9)
    {
        ans[Index] = 0;
        Index++;
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}