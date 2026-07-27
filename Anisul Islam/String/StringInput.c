// lecture 2
#include <stdio.h>
int main()
{
    char s1[50];
    printf("Enter your full name : ");
    // scanf("%s", &s1); (Can't handle input after space, so we use "gets")
    gets(s1);

    printf("Full name is = %s\n", s1);
}