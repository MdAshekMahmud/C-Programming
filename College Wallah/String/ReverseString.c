#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("Enter a string : ");
    gets(str);
    // Size
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverses string is : ");
    puts(str);
    return 0;
}