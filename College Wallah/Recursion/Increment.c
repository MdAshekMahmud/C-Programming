// 5
#include <stdio.h>
void increment(int n)
{
    if (n == 0)
    {
        return;
    }
    increment(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    increment(n);
    return 0;
}