#include <stdio.h>

long long findSum()
{
    long long n = 100000000000;
    return n * (n + 1) / 2;
}

int main()
{
    printf("Sum: %lld\n", findSum());
    return 0;
}