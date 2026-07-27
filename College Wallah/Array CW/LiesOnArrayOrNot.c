// Given an Array and a number 'x'. Find out if 'x' is lies in the array or not. If yes then print the index.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {12, 21, 21, 42, 21, 6, 7};
    int x = 21;
    int index = 0;
    bool flag = false; // False means not pesent
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // True means present
            index = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array ", x);
    }
    else
    {
        printf("%d is present in the array and it's index is = %d ", x, index);
    }
}