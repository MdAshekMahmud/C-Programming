// lecture 6
#include <stdio.h>
void display(int x[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    display(arr);
}