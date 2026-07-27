// Find the total number of alphabets, digits, or special characters in a string
#include <stdio.h>
int main()
{
    char str[100];
    int alphabet = 0, digit = 0, specialchars = 0;

    printf("Enter a string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabet++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            specialchars++;
        }
    }

    printf("Alphabet : %d\n", alphabet);
    printf("Digit : %d\n", digit);
    printf("Special Character : %d\n", specialchars);
}