#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("Enter a string : "); // Automatically \n diye dei
    gets(str);
    puts("The size of str is : ");
    // Size
    int size = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    printf("%d", size); // Space considered, but '\0' not considered.
    return 0;
}