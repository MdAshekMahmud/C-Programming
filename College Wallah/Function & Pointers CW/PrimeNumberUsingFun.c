#include <stdio.h>
#include <math.h> // For sqrt() function
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else if (isPrime(n))
    {
        printf("%d is a prime number.", n);
    }
    else
    {
        printf("%d is not a prime number.", n);
    }
    return 0;
}