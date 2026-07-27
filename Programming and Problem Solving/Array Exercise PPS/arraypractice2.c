#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Negative elements in the array are:");
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf(" %d", arr[i]);
        }
    }
    return 0;
}
