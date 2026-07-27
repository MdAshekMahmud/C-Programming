/* Given a point (x,y), write a program to find out
if it lies on the x-axis, y-axis or at the origin.*/
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates :");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("The point is on origin");
    }
    else if (x == 0)
    {
        printf("Lies on y-axis");
    }
    else if (y == 0)
    {
        printf("Lies on x-axis");
    }
    else
    {
        printf("The point does not lie on x or y axis, it's in Origin");
    }
    return 0;
}