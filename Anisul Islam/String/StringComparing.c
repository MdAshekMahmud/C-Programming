// lecture 9
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "Md Ashek";
    char str2[] = "Mahmud";

    int d = strcmp(str1, str2);

    if (d == 0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");
}