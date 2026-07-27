// lecture 1
#include <stdio.h>
int main()
{
    int x = 5;
    printf("Value of x = %d\n", x);
    printf("Address of x = %d\n", &x);
    printf("Address of x = %u\n", &x); // Address always positive integer so, %u
    printf("Assress of x = %x\n", &x); // show hexadecimal value

    int *ptr;
    ptr = &x;
    printf("%d\n", x);
    printf("Address %d\n", &x);
    printf("Address %d\n", ptr);
    printf("Value %d\n", *ptr);
    printf("Address %d\n", &ptr);
}
