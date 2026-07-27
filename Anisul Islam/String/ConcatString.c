// lecture 7
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "My Name is ";
    char str2[] = "Ashek Mahmud";

    strcat(str1, str2);

    printf("s1= %s\n", str1);
    printf("s2 = %s\n", str2);
}