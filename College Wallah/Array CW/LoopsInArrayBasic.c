#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Elements of number %d is = %d \n", i + 1, arr[i]);
    }
}