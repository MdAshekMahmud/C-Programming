/*Homework. If an array contains 'n' elements, then
check if the given array is a Palindrome or not */
#include <stdio.h>

int main()
{
    int n, isPalindrome = 1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element number '%d' of the array  : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("The array is a palindrome.\n");
        printf("Palindrome array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
