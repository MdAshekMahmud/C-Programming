#include <stdio.h>
void swapUsingPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapUsingValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Before swap : a = %d, b = %d\n", a, b);
    swapUsingPointers(&a, &b);
    printf("Using pointers : a = %d, b = %d\n", a, b);

    swapUsingValue(a, b);
    printf("Using pass-by-value : a = %d, b = %d\n", a, b);
    return 0;
}