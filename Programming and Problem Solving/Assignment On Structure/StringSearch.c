#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[50];
    char *pos;
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        str[strcspn(str, "\n")] = '\0';
    }
    printf("Enter the substring to search: ");
    if (fgets(substr, sizeof(substr), stdin) != NULL)
    {
        substr[strcspn(substr, "\n")] = '\0';
    }
    pos = strstr(str, substr);
    if (pos != NULL)
    {
        printf("Substring found at index: %ld\n", pos - str);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}
