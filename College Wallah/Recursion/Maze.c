// 15. Maze Path
#include <stdio.h>
int maze(int cr, int cc, int er, int ec) // cr = current row, cc = current column, er = end row, ec = end column
{
    int RightWays = 0;
    int DownWays = 0;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er) // Only RightWays Calls
    {
        RightWays += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec) // Only DownWays Calls
    {
        DownWays += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        RightWays += maze(cr, cc + 1, er, ec); // RightWays Calls
        DownWays += maze(cr + 1, cc, er, ec);  // DownWays Calls
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
    int NoOfWays = maze(1, 1, n, m);
    printf("%d", NoOfWays);
    return 0;
}