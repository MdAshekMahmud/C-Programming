// take positive integer input and tell if it is divisible by 5 and 3
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0) // if(n%15==0)
    {
        printf("It is divisible by 5 and 3");
    }
    else
        printf("It cannot divided by 5 and 3");
    return 0;
}