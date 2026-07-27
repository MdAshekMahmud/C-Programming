// Find the second largest element in the given array (Not Perfect, Only applicable for Increasing Order.)
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
}