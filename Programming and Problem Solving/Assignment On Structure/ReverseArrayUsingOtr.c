#include <stdio.h>
void reverseArray(int *arr, int size)
{
    int *start = arr, *end = arr + size - 1, temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[5], i;
    printf("Enter 5 integers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    reverseArray(arr, 5);
    printf("\nReversed Array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}