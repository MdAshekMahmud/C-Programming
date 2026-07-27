// Take 3 positive integers input and print the greatest of them
#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Enter the first number :");
    scanf("%d", &i);
    printf("Enter the second number :");
    scanf("%d", &j);
    printf("Enter the third number :");
    scanf("%d", &k);

    if (i > j && i > k)
    {
        printf("Greatest number is = %d", i);
    }
    else if (j > i && j > k)
    {
        printf("Greatest number is = %d", j);
    }
    else
        printf("Greatest number is = %d", k);
    return 0;
}