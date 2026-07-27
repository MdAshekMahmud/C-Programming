// 6.Print 1 to n:
#include <stdio.h>
void increment(int x, int y)
{
    if (x > y)
    {
        return;
    }
    printf("%d\n", x);
    increment(x + 1, y);
    return;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    increment(1, n);
    return 0;
}