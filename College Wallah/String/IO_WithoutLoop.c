#include <stdio.h>
#include <string.h>
int main()
{
    // Method 1
    char str[] = "Md Ashek Mahmud";
    printf("%s\n", str);
    puts(str);

    // Method 2
    char str2[40];
    puts("Enter string : ");
    scanf("%s", str2); // no & needed but only first word will be considered
    printf("%s\n", str2);

    // Method 3
    // char str3[20];
    // gets(str3);
    // printf("Your input was : %s ", str3);
}