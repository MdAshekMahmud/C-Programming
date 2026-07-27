// lecture 6
#include <stdio.h>

// Function to display array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Add a space for better readability
    }
    printf("\n"); // Add a newline for better output formatting
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of size 'n'

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input array elements
    }

    printf("The elements of the array are: ");
    display(arr, n); // Correctly pass the array and its size

    return 0;
}
