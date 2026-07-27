// Write a C program to display all alphabets from 'a' to 'z' using a while loop
#include<stdio.h>
int main()
{
    char ch = 'a';
    printf("Alphabets from a to z: ");
    while(ch<='z')
    {
        printf("%c\t",ch);
        ch++;
    }
    return 0;
}

