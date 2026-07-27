#include <iostream>
using namespace std;

// Helper function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate all permutations of an array
void permute(int arr[], int l, int r)
{
    if (l == r)
    {
        // Print the current permutation
        for (int i = 0; i <= r; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(&arr[l], &arr[i]); // Swap to create a new permutation
        permute(arr, l + 1, r); // Recurse for the next position
        swap(&arr[l], &arr[i]); // Backtrack (restore the original array)
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "All permutations of the array: " << endl;
    permute(arr, 0, n - 1);

    return 0;
}