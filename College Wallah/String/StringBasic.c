#include <stdio.h>
int main()
{
    char arr[11] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    for (int i = 0; i < 11; i++)
    {
        printf("%c ", arr[i]);
    }
    return 0;
}