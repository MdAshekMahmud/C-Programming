#include <stdio.h>
#define MAX 4
int Stack_arr[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow.");
        return;
    }
    top = top + 1;
    Stack_arr[top] = data;
    printf("%d\n", Stack_arr[top]);
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    return 0;
}