#include <stdio.h>
#include <math.h>
int main()
{
    double r, area, pie;
    pie = acos(-1);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area = pie * r * r;
    printf("The area of the circle is: %lf\n", area);
    printf("The value of pie is: %lf\n", pie);
    return 0;
}