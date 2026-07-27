#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, distance;
    printf("Enter the coordinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));                // Distance formula
    printf("The distance between the two points is: %lf\n", distance); // Output
    return 0;
}