/*Given three points (x1,y1), (x2,y2), (x3,y3), write a program
to check if all the three points fall on one straight line*/
#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    printf("x1=  ");
    scanf("%lf", &x1);
    printf("y1= ");
    scanf("%lf", &y1);
    printf("x2=  ");
    scanf("%lf", &x2);
    printf("y2=  ");
    scanf("%lf", &y2);
    printf("x3=  ");
    scanf("%lf", &x3);
    printf("y3=  ");
    scanf("%lf", &y3);
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("Points are on one straight line");
    }
    else
    {
        printf("Points are not on one straight line");
    }
    return 0;
}