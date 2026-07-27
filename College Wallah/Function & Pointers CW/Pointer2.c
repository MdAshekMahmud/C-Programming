// 14
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;
    *p = 25; // a is changed!

    printf("%p\n", p);
    printf("%p\n", &a);
    printf("%d\n", *p);
    return 0;
}