#include <stdio.h>
int main()
{
    int b = 10;
    int *p; // pointer to integer
    p = &b;

    printf("%d\n", b);  // 10
    printf("%d\n", *p); // 10
    printf("%p\n", &b); // address
    printf("%p\n", p);  // same address
    return 0;
}