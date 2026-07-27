// Combination (nCr) using Function 6
// Combination (nCr) = n! / (r! * (n-r)!)
#include <stdio.h>
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
    int r;
    printf("Enter r : ");
    scanf("%d", &r);

    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int nrfact = factorial(n - r);
    // int ncr = nfact / (rfact * nrfact);

    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("nCr is = %d", ncr);

    return 0;
}