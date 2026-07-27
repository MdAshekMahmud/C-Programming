#include <stdio.h>
#include <string.h>

void findCharacter(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character found at index %d\n", i);
            return;
        }
    }
    printf("Character not found\n");
}

int main()
{
    char str[] = "Md Ashek Mahmud";
    char ch = 'A';
    findCharacter(str, ch);
    return 0;
}