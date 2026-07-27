// lecture 13
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30] = "Bangladesh";
    char str2[30] = "Pkistan";
    char temp[30];

    printf("Before Swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("\n\nAfter Swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}