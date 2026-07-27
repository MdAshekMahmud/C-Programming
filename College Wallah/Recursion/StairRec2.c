// 13. Stair Path -> 'n' th stair, single, double or tripple step
#include <stdio.h>
int stair(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int Totalways = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return Totalways;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d", ways);
    return 0;
}