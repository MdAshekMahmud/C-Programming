// lecture 4
#include <stdio.h>
double calculatePower(double base, double exp)
{
    double result = 1, i;
    for (i = 1; i <= exp; i++)
    {
        result *= base;
    }
    printf("%.2lf to the power %.2lf is = %lf\n", base, exp, result);
}
int main()
{
    double base, exp;
    printf("Enter base : ");
    scanf("%lf", &base);
    printf("Enter exponent : ");
    scanf("%lf", &exp);

    calculatePower(base, exp);
    calculatePower(2, 6);
    calculatePower(2, 4);
}