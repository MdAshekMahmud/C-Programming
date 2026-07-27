// Take 3 positive integers input and print the greatest of them
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number :");
    scanf("%d", &a);
    printf("Enter 2nd number :");
    scanf("%d", &b);
    printf("Enter 3rd number :");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else // a<c  ->   b < a < c
        {
            printf("%d is greatest", c);
        }
    }
    else // b > a  ->  a akhn sobcheye boro noy
    {
        if (b > c)
        {
            printf("%d is greater", b);
        }
        else // c>b  ->  a<b<c
            printf("%d is greater", c);
    }
    return 0;
}