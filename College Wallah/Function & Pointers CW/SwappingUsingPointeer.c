// 15
#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp=2
    *x = *y;   // a=5
    *y = temp; // *y=2 -> b=2
}
int main()
{
    int a = 2;
    int b = 5;

    swap(&a, &b); // Pass by refrence
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}