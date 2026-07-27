#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    int nst = 1;
    int nsp = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp--;
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst += 2;
        printf("\n");
    }
}