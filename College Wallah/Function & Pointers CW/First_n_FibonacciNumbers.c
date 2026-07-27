// First 'n' Fibonacci numbers are calculated and displayed.
// The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones.
// The sequence starts with 0 and 1.
// The first few Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.

#include <stdio.h>
#include <math.h>

int fibonacci(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        int a = 1;
        int b = 1;
        int sum = 1;
        for (int i = 1; i <= x - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        return sum;
    }
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

// Example Execution:
// Input: 𝑛 = 6
// For 𝑖 = 0: fibonacci(0) returns 0.
// For 𝑖 = 1: fibonacci(1) returns 1.
// For 𝑖 = 2:
// Loop runs 0 times because (x − 2 = 0)
// Returns sum = 1.
// For 𝑖 = 3:
// Loop runs 1 time because (x − 2 = 1)
// Returns sum = 2.
// For 𝑖 = 4:
// Loop runs 2 times because (x − 2 = 2)
// Returns sum = 3.
// For 𝑖 = 5:
// Loop runs 3 times because (x − 2 = 3)
// Returns sum = 5.
// For 𝑖 = 6:
// Loop runs 4 times because (x − 2 = 4)
// Returns sum = 8.
// Output: 0 1 1 2 3 5
