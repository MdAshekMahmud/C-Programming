// 16
#include <stdio.h>
int main()
{
    int a = 5;
    int *p = &a;  // int* -> stores int adress
    *p = 25;      //*p = 25; // a is changed!
    int **q = &p; // int** -> stores int* adress
    printf("%d\n", a);
    printf("%p\n", *p);
    printf("%d\n", **q);
    return 0;
}