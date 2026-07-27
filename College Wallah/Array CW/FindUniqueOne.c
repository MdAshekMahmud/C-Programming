// Find the unique number in a given array where all the elaments are being repeated twice with one value being unique
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {1, 3, 6, 1, 1, 2, 3};
    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("Unique value is : %d", arr[i]);
            break;
        }
    }
    return 0;
}