#include <stdio.h>
void sort(char *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void print(char *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}
int main()
{
    // int array[] = {11, 21, 32, 12, 99, 199, 42};
    char array[] = {'a', 'z', 'b', 'c', 'f', 'e'};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    print(array, size);
    return 0;
}