/*Write a program to create a calculator that performs basic arithmetic
operations (add, subtract, multiply, and division) using switch case.
The calculator should input two numbers and an operator from user.  */
#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the operator : ");
    scanf(" %c", &op);

    printf("Enter the second number : ");
    scanf("%d", &b);

    switch (op)
    {
    case '+':
        printf("The sum is %d\n", a + b);
        break;
    case '-':
        printf("The difference is %d\n", a - b);
        break;
    case '*':
        printf("The product is %d\n", a * b);
        break;
    case '/':
        printf("The division is %.2f\n", (float)a / b);
        break;
    case '%':
        printf("The remainder is %d\n", a % b);
        break;

    default:
        printf("Invalid Operator\n");
        break;
    }

    return 0;
}