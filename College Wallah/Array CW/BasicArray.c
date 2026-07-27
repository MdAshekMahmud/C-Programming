#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    arr[4] = 100;
    printf("%d\n", arr[4]);

    float a[3] = {1.2, 1.3, 1.4};
    printf("%.1f\n", a[2]);

    char b[4] = {'A', 'B', 'C', '%'};
    printf("%c", b[2]);
}