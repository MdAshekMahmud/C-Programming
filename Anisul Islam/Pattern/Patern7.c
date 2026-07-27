// Type 1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    char Ascii;
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            Ascii = 64 + row;
            printf("%c ", Ascii);
        }
        printf("\n");
    }
    return 0;
}