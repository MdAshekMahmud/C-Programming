// Given a matrix having 0-1 only, find the row with the maximum number of 1’s.
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
    int maxCount = 0;
    int maxIndex = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        {
            for (int j = 0; j < 4; j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
                if (maxCount < count)
                {
                    maxCount = count;
                    maxIndex = i;
                }
            }
            printf("\n");
        }
    }
    printf("row with the maximum number of 1’s is = %d", maxIndex);
    return 0;
}