/*Count the number of triplets whose sum is equal
to the given value x */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the value of X : ");
    scanf("%d", &x);
    int totaltriplets = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    printf("Pair %d [%d + %d + %d]\n", i + 1, arr[i], arr[j], arr[k]);
                    totaltriplets++;
                }
            }
        }
    }
    printf("There are total %d triplets available.", totaltriplets);
    return 0;
}