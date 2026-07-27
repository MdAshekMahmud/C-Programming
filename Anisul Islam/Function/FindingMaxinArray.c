// lecture 7
#include <stdio.h>
int max(int x[])
{
    int maximum = x[0];
    for (int i = 0; i < 5; i++)
    {
        if (x[i] > maximum)
        {
            maximum = x[i];
        }
    }
    return maximum;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int maximumValue = max(arr);
    printf("Maximum value is = %d", maximumValue);
}