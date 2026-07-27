#include <stdio.h>
int main()
{
    char str[] = "Md Ashek Mahmud";
    printf("%c\n", str[5]);  // Character
    printf("%d\n", str[10]); // ASCII Value

    str[0] = 'D'; // replace M with -> D
    str[1] = 97;  // replace d with -> 'a'.
    printf("%c\n", str[0]);
    printf("%c\n", str[1]);

    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", i[str]); // This type initialization is also correct
        i++;
    }
    return 0;
}