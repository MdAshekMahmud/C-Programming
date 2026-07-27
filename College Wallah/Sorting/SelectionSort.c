#include <stdio.h>
#include <limits.h>

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

int main()
{
    int arr[] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // selectionSort(arr, n);
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minIndex = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIndex = j;
            }
        }
        // Swap the min and first element of unsorted array
        // swap minIndex and i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("Sorted Array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}