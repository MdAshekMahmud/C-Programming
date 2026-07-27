// lecture 15
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, vowel, consonant, digit, word, other;

    printf("Enter a string : ");
    gets(str);

    i = vowel = consonant = digit = word = other = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            word++;
        }
        else
            other++;
        i++;
    }
    word++;

    printf("Number of Vowels = %d\n", vowel);
    printf("Number of Consonants = %d\n", consonant);
    printf("Number of Digits = %d\n", digit);
    printf("Number of Words = %d\n", word);
    printf("Number of Others = %d\n", other);
}