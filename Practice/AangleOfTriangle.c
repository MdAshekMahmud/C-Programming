// Lengths of the sides of a triangle are given. Calculate three angles of the triangle.
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main()
{
    double a, b, c, A, B, C;
    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    A = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
    B = acos((c * c + a * a - b * b) / (2 * c * a)) * (180.0 / M_PI);
    C = acos((a * a + b * b - c * c) / (2 * a * b)) * (180.0 / M_PI);
    printf("The three angles of the triangle are: %lf, %lf, %lf\n", A, B, C);
    return 0;
}