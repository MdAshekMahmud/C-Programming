/*Find the total number of pairs in the array
whose sum is equal to the given value x */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the value of X : ");
    scanf("%d", &x);
    int totalpairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                printf("Pair %d [%d + %d] = %d\n", i + 1, arr[i], arr[j], x);
                totalpairs++;
            }
        }
    }
    if (totalpairs == 0)
        printf("No pairs available :) ");
    else
        printf("There are total %d pairs available.", totalpairs);
    return 0;
}