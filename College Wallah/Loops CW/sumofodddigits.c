#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            sum = sum + digit;
        }
        num /= 10;
    }
    printf("Sum of all odd numbers : %d\n", sum);
    return 0;
}