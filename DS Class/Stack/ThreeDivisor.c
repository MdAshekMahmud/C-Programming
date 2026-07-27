// bool isThree(int n) Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

#include <stdio.h>
#include <stdbool.h>

bool isThree(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
        return count;
}

int main()
{
    int n = 2;
    printf("%d has exactly three positive divisors: %s\n", n, isThree(n) ? "true" : "false");
    return 0;
}