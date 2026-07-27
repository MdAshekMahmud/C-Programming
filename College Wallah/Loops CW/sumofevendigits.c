// WAP to print sum of all the even digits of a given number
#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10; // Extract the last digit

        // Check if the digit is even
        if (digit % 2 == 0)
        {
            sum += digit;
        }

        num /= 10; // Remove the last digit
    }

    // Output the sum of even digits
    printf("Sum of all even digits: %d\n", sum);

    return 0;
}