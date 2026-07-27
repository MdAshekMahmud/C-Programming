// LECTURE 3
#include <stdio.h>
int main()
{
    char s1[] = {"Ashek Mahmud"};
    int i = 0;

    while (s1[i] != '\0')
    {
        printf("%c", s1[i]);
        i++;
    }
    return 0;
}
