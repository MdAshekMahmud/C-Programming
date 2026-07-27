// Print first 'n' fibonacci numbers. Method 2
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int a = 0, b = 1, sum;

    printf("The 1st fibonacci number is %d\n", a);
    if (n > 1)
    {
        printf("The 2nd fibonacci number is %d\n", b);
    }

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("The %dth fibonacci number is %d\n", i, sum);
    }

    return 0;
}