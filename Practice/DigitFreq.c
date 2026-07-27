#include <stdio.h>
int main()
{
    char str[100];
    int freq[10] = {0};
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            freq[str[i] - '0']++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] != 0)
            printf("Frequency of %d = %d", i, freq[i]);
    }
    return 0;
}