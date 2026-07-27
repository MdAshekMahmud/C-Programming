// Convert an uppercase string to lowercase
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}