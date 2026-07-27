#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
    long long int x = INT_MAX;
    printf("The value of __INT_MAX__ is %ld\n", x);

    float y = cbrt(8);
    printf("The cube root of 8 is %f\n", y);

    long z = LONG_MAX;
    printf("The value of __LONG_MAX__ is %ld\n", z);

    return 0;
}