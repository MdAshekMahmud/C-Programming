// Count the total number of vowels and consonants in a string
#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0, consonant = 0;

    printf("Enter a string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            consonant++;
        }
    }

    printf("Vowels : %d\n", vowels);
    printf("Consonants : %d\n", consonant);
    return 0;
}