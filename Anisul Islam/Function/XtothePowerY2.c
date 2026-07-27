// lecture 5 (without function)
#include <stdio.h>
#include <math.h>
int main()
{
    double base, exp, result;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exponent : ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("%.2lf to the power %.2lf is = %.4lf\n", base, exp, result);
}