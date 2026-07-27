// 18. Zig Zag
#include <stdio.h>
void ZigZag(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n);
    ZigZag(n - 1);
    printf("%d ", n);
    ZigZag(n - 1);
    printf("%d ", n);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    ZigZag(n);
    return 0;
}