// lecture 1
#include <stdio.h>
int main()
{
    // This is wrong, because last box must be '\0'
    // char s1[5];

    // s1[0] = 'A';
    // s1[1] = 'S';
    // s1[2] = 'H';
    // s1[3] = 'E';
    // s1[4] = 'K';

    // printf("s1 = %s\n", s1);

    char s1[6];
    // char s1[6]={'A','S','H','E','K'};
    // char s1[]="ASHEK";

    s1[0] = 'A';
    s1[1] = 'S';
    s1[2] = 'H';
    s1[3] = 'E';
    s1[4] = 'K';
    s1[5] = '\0'; // Na dileo cholbs

    printf("s1 = %s\n", s1);
}