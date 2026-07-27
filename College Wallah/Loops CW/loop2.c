// Print odd numbers
#include <stdio.h>
int main()
{
    int i, n;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0) // if(i%2==0) - for even
        {
            printf("%d ", i);
        }
    }
}