/*Given an array of integers, change the value of all
odd indexed elements to it's second multiple and increment
all even indexed value by 10 */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = arr[0];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}