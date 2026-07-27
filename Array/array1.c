#include <stdio.h>
int main()
{
    int a;
    printf("Enter size : ");
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%p ", &arr[i]);
    }
}