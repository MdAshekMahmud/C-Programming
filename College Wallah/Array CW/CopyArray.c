/* Write a program to copy the contents of one array
into another in the reverse order*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[(n - 1) - i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}