#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int *q;
    /*
    a = &a -> possible
    q = &q -> not possible
    */
    q = a; // no "&" sign needed, because array 1st element refers to pointer
    printf("%p\n", &a);
    printf("%p\n", a);
    printf("%p\n", q);
    q++;
    printf("%p\n", q);
    printf("%d", *q);
    return 0;
}