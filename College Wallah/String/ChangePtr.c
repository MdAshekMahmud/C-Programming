#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Ashek Mahmud";
    char *s2 = s1;

    // Let's change in s1.
    s1[0] = 'M'; // Shallow Copy
    printf("%s", s2);
    return 0;
}