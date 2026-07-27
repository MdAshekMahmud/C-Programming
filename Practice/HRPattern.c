#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= 2 * rows - 1; i++)
    {
        for (int j = 1; j <= 2 * rows - 1; j++)
        {
            int min;
            if (i < j)
                min = i;
            else
                min = j;
            if (min > 2 * rows - i)
                min = 2 * rows - i;
            if (min > 2 * rows - j)
                min = 2 * rows - j;
            printf("%d ", rows - min + 1);
        }
        printf("\n");
    }
}