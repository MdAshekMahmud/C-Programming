#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}