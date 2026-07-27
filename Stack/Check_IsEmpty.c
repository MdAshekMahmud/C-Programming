#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int Stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow.\n");
        return;
    }
    top = top + 1;
    Stack_arr[top] = data;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    int value;
    value = Stack_arr[top];
    top = top - 1;
    return value;
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    data = pop();
    data = pop();
    data = pop();
    data = pop();
}