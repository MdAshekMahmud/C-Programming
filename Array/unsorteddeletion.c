#include <stdio.h>
int main()
{
    int a[50], size, pos;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the position to delete : ");
    scanf("%d", &pos);
    a[pos - 1] = a[size - 1];
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}