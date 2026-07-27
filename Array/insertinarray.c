#include <stdio.h>
int main()
{
    int a[50], size, num, pos;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    if (size > 50)
        printf("Overflow condition : ");
    else
    {
        printf("Enter elements of array : \n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Elements in array are ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nEnter data you want to insert : ");
        scanf("%d", &num);
        printf("Enter the position where to insert : ");
        scanf("%d", &pos);

        for (int i = size - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;
        for (int i = 0; i < size; i++)
        {
            printf("%d ", a[i]);
        }
    }
}