#include <stdio.h>

struct code
{
    int a;
    char c;
    struct code *ptr;
};

int main()
{
    struct code var1;
    struct code var2;

    var1.a = 65;
    var1.c = 'A';
    var1.ptr = NULL;

    var2.a = 66;
    var2.c = 'B';
    var2.ptr = NULL;

    var1.ptr = &var2;

    printf("%d %c\n", var1.ptr->a, var1.ptr->c);

    return 0;
}