// lecture 3
#include <stdio.h>
double area(double x, double y)
{
    double area = 0.5 * x * y;
    return area;
}

int main()
{
    double base, height;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter height : ");
    scanf("%lf", &height);

    double result = area(base, height);
    printf("Area of the triangle is = %.3lf\n", result);
}