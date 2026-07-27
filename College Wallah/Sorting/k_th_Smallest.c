/*Given an integer array and an integer k where k <= size of array,
We need to return the 'k'th smallest element of the array.*/
/*GeeksForGeeks Problem*/
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findKthSmallest(int arr[], int n, int k)
{
    bubbleSort(arr, n);
    return arr[k - 1];
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = 6;
    int k = 4;
    int kthSmallest = findKthSmallest(arr, n, k);
    printf("The %dth smallest element is %d\n", k, kthSmallest);
    return 0;
}