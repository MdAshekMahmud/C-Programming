#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Ashek Mahmud";
    char *ptr = str; // ptr now points to str[0]
    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
        i++;
    }
    return 0;
}