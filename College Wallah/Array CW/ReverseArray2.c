/* Write a program to reverse the array
without using any extra array*/
#include <stdio.h>
void reverse(int arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("Reversed array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}