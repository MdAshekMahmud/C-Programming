/*11. *Multiple calls
Write a function to calculate the 'n' th Fibonacci number using recursion*/
#include <stdio.h>
int fibo(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}