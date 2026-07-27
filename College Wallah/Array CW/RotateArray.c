// Rotate part of array
#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
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
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int startingIndex;
    printf("Enter Starting Index to rotate : ");
    scanf("%d", &startingIndex);
    int endingIndex;
    printf("Enter Ending Index to rotate : ");
    scanf("%d", &endingIndex);
    reverse(arr, startingIndex, endingIndex);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}