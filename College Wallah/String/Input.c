#include <stdio.h>
int main()
{
    char str2[40];
    puts("Enter string : ");
    scanf("%[^\n]s", str2); // Entire sentence can be input
    printf("%s\n", str2);
}