// Write a C program to display all natural numbers in reverse order (from n to 1) using a while loop
#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    printf("Natural numbers in reverse order from %d to 1:\n", n);
    while (n >= 1)
    {

        printf("%d  ", n);
        n--;
    }
    return 0;
}
