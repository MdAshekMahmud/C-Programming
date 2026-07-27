/*Given an array of integers with 1 to 'n' elements and the size of the array is n+1.
One element is occuring more than once i.e duplicate number is present.
Find the duplicate elemnt.*/

#include <stdio.h>

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 9, 9, 10};

    // for (int i = 0; i < 8; i++)
    // {
    //     for (int j = i + 1; j < 10; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             printf("Duplicate element is %d ", arr[i]);
    //             break;
    //         }
    //     }
    // }

    // method 2
    // int arr[11] = {6, 1, 7, 3, 2, 5, 4, 8, 9, 9, 10};
    // int arr2[11] = {0}; // Auxiliary array to track occurrences

    // for (int i = 0; i < 11; i++)
    // {
    //     if (arr2[arr[i]] == 1)
    //     { // Check if the value is already marked
    //         printf("Duplicate found: %d\n", arr[i]);
    //     }
    //     else
    //     {
    //         arr2[arr[i]] = 1; // Mark the value as visited
    //     }
    // }

    // Method 3
    int arr[11] = {6, 1, 7, 3, 2, 5, 4, 8, 9, 9, 10};
    int sum1 = 11 * ((11 + 1) / 2);
    int sum2 = 0;

    for (int i = 0; i < 11; i++)
    {
        sum2 += arr[i];
    }

    printf("Duplicate = %d ", sum1 - sum2);

    return 0;
}