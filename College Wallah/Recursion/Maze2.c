// 16. Maze Path (Method 2)
#include <stdio.h>
int maze(int n, int m)
{
    int RightWays = 0;
    int DownWays = 0;
    if (n == 1 && m == 1) // Base case
    {
        return 1;
    }
    if (n == 1) // Can't go down
    {
        RightWays += maze(n, m - 1);
    }
    if (m == 1) // Can't go right
    {
        DownWays += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        RightWays += maze(n, m - 1);
        DownWays += maze(n - 1, m);
    }
    int TotalWays = RightWays + DownWays;
    return TotalWays;
}
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of column : ");
    scanf("%d", &m);
    int NoOfWays = maze(n, m);
    printf("%d", NoOfWays);
    return 0;
}