// lecture 3
#include <stdio.h>
int main()
{
    int x = 10, y = 20, Addition, Subtraction, Multiplication, Division;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    Addition = *ptr1 + *ptr2;
    printf("Addition is = %d\n", Addition);

    Subtraction = *ptr1 - *ptr2;
    printf("Subtraction is = %d\n", Subtraction);

    Multiplication = *ptr1 * *ptr2;
    printf("Multiplication is = %d\n", Multiplication);

    Division = *ptr1 / *ptr2;
    printf("Division is = %d\n", Division);
}