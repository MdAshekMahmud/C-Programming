// Factorials of first n numbers are calculated and displayed.
// The factorial of a number is the product of all positive integers less than or equal to that number.
// For example, the factorial of 5 is 5 * 4 * 3 * 2 * 1 = 120.
// The factorial of 0 is 1.
// The factorial of 1 is 1.
// The factorial of 2 is 2.

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
    for (int i = 1; i <= n; i++)
    {
        printf("The factorial of %d is %d : \n", i, factorial(i));
    }
    return 0;
}