/*Print the given pattern
1
A B
1 2 3
A B C D
1 2 3 4 5*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char ch = 65;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c ", (char)ch);
            }
            else
                printf("%d ", j);
            ch++;
        }
        printf("\n");
    }
}