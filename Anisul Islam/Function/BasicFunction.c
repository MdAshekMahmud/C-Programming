// lecture 1
#include <stdio.h>

// Return Type Function_Name(Parameter/Argument)

int sum(int a, int b)
{
    return a + b;
}
void sub(int x, int y)
{
    printf("Subtraction is = %d\n", x - y);
}

int main()
{
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);
    printf("Sum is = %d\n", sum(num1, num2));

    sub(num1, num2);
}
