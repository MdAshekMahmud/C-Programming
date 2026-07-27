// Take 4 positive integers input and print the greatest of them
#include <stdio.h>
int main()
{
    int i, j, k, l;
    printf("Enter the first number :");
    scanf("%d", &i);
    printf("Enter the second number :");
    scanf("%d", &j);
    printf("Enter the third number :");
    scanf("%d", &k);
    printf("Enter the fourth number :");
    scanf("%d", &l);

    if (i > j && i > k && i > l)
    {
        printf("Greatest number is = %d", i);
    }
    else if (j > i && j > k && j > l)
    {
        printf("Greatest number is = %d", j);
    }
    else if (k > i && k > j && k > l)
    {
        printf("Greatest number is = %d", k);
    }
    else
        printf("Greatest number is = %d", l);
    return 0;
}