#include <stdio.h>

#define PI 3.14159265359
#define Area(r) (PI * r * r)

int main()
{
    printf("The value of PI is %.11f\n", PI); // float -> 6 decimal places
    printf("The area of a circle with radius 5 is %.2f\n", Area(10));

    return 0;
}