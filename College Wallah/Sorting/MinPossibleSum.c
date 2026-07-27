/*Given an array of digits (values are from 0 to 9), the task is to find the minimum
possible sum of two numbers formed from digits of the array.
Note that all digits of the given array must be used to form the two numbers. */
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
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void minSum(int arr[], int n)
{
    bubbleSort(arr, n);
    long long int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = a * 10 + arr[i];
        }
        else
        {
            b = b * 10 + arr[i];
        }
    }
    printf("%lld\n", a + b);
}

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    minSum(arr, n);
    return 0;
}
