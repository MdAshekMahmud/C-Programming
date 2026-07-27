/* Any year is inut through the kekyboard.
 Write a program to determine whether the year is a leap year or not*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        printf("Leap year");
    }
    else
    {
        printf("No it is not leap year");
    }

    return 0;
}