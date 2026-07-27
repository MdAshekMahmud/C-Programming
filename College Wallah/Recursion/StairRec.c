// 12. Stair Path -> 'n' th stair, single or double step
#include <stdio.h>
int stair(int n)
{
    if (n <= 2)
    {
        return n;
    }
    int Totalways = stair(n - 1) + stair(n - 2);
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