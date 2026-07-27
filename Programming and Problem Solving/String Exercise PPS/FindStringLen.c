// C program to find the length of a string:
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int len = 0;

    printf("Enter a string : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("Length of the string is : %d\n", len);

    return 0;
}
