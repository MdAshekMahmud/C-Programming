// 14. Power Function (Logarithmic)
#include <stdio.h>
int PowerLog(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    int x = PowerLog(a, b / 2);
    if (b % 2 == 0) // Even
    {
        return x * x;
    }
    else
        return x * x * a;
}
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    int p = PowerLog(a, b);
    printf("%d", p);
}