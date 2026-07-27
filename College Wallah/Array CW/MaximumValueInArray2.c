#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN;
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
    printf("%d", max);
}