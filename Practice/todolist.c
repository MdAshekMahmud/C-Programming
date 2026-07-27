#include <stdio.h>

int main()
{
    // your code goes here
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if (arr[i] >= 1000)
            {
                count++;
            }
        }
        printf("%d\n", count);
        n--;
    }
}
