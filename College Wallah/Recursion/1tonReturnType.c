// 9.Print 1 to n (Return Type)
#include <stdio.h>
int sum(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("%d", sum(n));
}