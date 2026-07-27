// lecture 6
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Ashek Mahmud";
    char s2[100];

    strcpy(s2, s1);

    printf("s1 = %s\n", s1);
    printf("s2 = %s", s2);
}