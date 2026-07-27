#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Find the length of the string
    length = strlen(str);

    // Reverse the string by swapping
    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}