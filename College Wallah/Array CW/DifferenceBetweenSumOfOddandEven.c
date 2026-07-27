/*Find the difference between the sum of elements at
even indeces to the sum of elements at odd indeces */
#include <stdio.h>
int main()
{
    int n;
    int sumofeven = 0;
    int sumofodd = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumofeven += arr[i];
        }
        else
        {
            sumofodd += arr[i];
        }
    }
    int difference = sumofeven - sumofodd;
    if (difference < 0)
        difference *= -1;
    printf("%d", difference);
    return 0;
}
