/* Given an array of integers numbers that is already sorted in non-decreasing (means increasing )
 order,find two numbers such that they add up to a specific target number. */

// Two Pointers approach
#include <stdio.h>

int main()
{
    int arr[6] = {2, 7, 11, 15, 16, 20};
    int target = 31;
    int i = 0, j = 5;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("The numbers are %d and %d\n", arr[i], arr[j]);
            break;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}