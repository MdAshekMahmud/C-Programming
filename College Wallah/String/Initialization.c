#include <stdio.h>
int main()
{
    char str[16] = "Md Ashek Mahmud";
    int i = 0;
    // while(i<16) -> This is correct
    while (str[i] != '\0') // This is perfect
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}