#include <stdio.h>
int main()
{
    FILE *ptr = fopen("test.txt", "w");
    char arr[100] = "Daffodil Local University\nDhoner Varsity";
    fputs(arr, ptr);
    fclose(ptr);
    return 0;
}