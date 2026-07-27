// Print 3 digit number
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("It is a three digit number");
    }
    else
    {
        printf("It is not a three digit number");
        return 0;
    }
}