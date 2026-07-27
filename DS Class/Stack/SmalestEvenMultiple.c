// int smallestEvenMultiple(int n) // smallest even multiple of 2 & n=5 is = 10

#include <stdio.h>

int smallestEvenMultiple(int n)
{
    int i = 1;
    while (1)
    {
        if (i % 2 == 0 && i % n == 0)
        {
            return i;
        }
        i++;
    }
}

int main()
{
    int n = 6;
    printf("Smallest even multiple of 2 and %d is %d\n", n, smallestEvenMultiple(n));
    return 0;
}
