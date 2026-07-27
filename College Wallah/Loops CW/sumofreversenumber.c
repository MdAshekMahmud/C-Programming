// WAP to print the sum of given number and its reverse
#include <stdio.h>
int main()
{
    int n, original, r = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    original = n; // Store the original number
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("Sum of given number and its reverse is = %d", original + r);
    return 0;
}