#include <stdio.h>
typedef int *int_pointer;
int main()
{
    int x = 10, y = 7;
    // int *x, y; // x is a pointer to an integer, y is an integer
    int_pointer a = &x, b = &y; // a is a pointer to an integer, b is a pointer to an integer
    printf("%p %p\n", a, b);
    return 0;
}