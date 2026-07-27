#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        // Add spaces for centering
        for (int space = 0; space < n - i; space++)
        {
            printf("%3c", ' '); // Print with formatting for alignment
        }

        // Print the Pascal's triangle values
        for (int j = 0; j <= i; j++)
        {
            int iCj = combination(i, j);
            printf("%6d", iCj); // Print with formatting for alignment
        }
        printf("\n");
    }

    return 0;
}

// The %4d formatting specifier in printf is used to print an integer(d) with a width of at least 4 characters.
// If the integer has fewer digits, it will be padded with spaces on the left to make it 4 characters wide.
// This ensures consistent spacing between numbers, which is essential for aligning the numbers properly in a Pascal's Triangle.

// Why %4d Specifically?

// Alignment:
// Pascal's Triangle grows larger with each row, and the numbers can have different digit counts.
// Using %4d ensures that even larger numbers fit into the same column width, maintaining alignment.

// Flexibility:

// %4d allocates 4 spaces for each number. If a number has fewer than 4 digits, spaces are added to the left.
// If a number exceeds 4 digits (e.g., 10000), it will still be printed, but alignment may break slightly.

// Readability:
// The consistent spacing makes the triangle visually appealing and easy to read.