// 7
#include <stdio.h>
#include <stdio.h>
void decrement(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    decrement(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    decrement(n);
    return 0;
}