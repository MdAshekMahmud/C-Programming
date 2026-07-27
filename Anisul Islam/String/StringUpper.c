// lecture 14
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Ashek Mahmud";
    char str2[] = "Ashek Mahmud";

    strupr(str);
    strlwr(str2);
    printf("str = %s\n", str);
    printf("str = %s\n", str2);
}