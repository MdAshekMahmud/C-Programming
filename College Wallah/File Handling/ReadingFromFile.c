#include <stdio.h>
int main()
{
    FILE *ptr = fopen("test.txt", "r");
    char arr[100];
    while (fgets(arr, 10, ptr) != NULL)
        printf("%s", arr);
    return 0;
}