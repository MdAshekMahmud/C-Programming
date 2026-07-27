// 13
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;
    printf("%p\n", p);
    printf("%p\n", &a);
    printf("%d\n", *p);
    return 0;
}