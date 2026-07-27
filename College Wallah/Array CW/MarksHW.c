#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Less than 30 marks -> ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    // Print roll number as index number
    printf("Index numbers are : ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 35)
        {
            printf("%d ", i);
        }
    }
    return 0;
}