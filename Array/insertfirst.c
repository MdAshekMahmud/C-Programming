#include <stdio.h>
int main()
{
    int a[50], size, num;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter the elements of array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the number you want to insert : ");
    scanf("%d", &num);

    for (int i = size; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = num;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}