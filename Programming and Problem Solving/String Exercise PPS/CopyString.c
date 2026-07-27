// C program to copy one string to another string:
#include <stdio.h>
int main(void)
{
    char src[100], dest[100];
    int i;

    printf("Enter a string to copy : ");
    gets(src);

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';

    printf("Copied string : %s\n", dest);
    return 0;
}