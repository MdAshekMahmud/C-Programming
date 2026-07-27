// lecture 2
#include <stdio.h>
int square(int x)
{
    printf("%d", x * x);
}

int main()
{
    int num;
    printf("Enter any integer number : ");
    scanf("%d", &num);

    square(num);
}