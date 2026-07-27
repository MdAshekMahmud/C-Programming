#include <stdio.h>
#include <stdlib.h>
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
}

int pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    value = Stack_arr[top];
    top = top - 1; // Decrement the size to make illution that the top element is deleted
    return value;
}

void print()
{
    if (top == -1)
    {
        print("Stack Underflow.\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("Stack elements : %d\n", Stack_arr[i]);
    }
}

int main()
{
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data = pop();
    printf("%d deleted from the Stack.\n", data);
    data = pop();
    printf("%d deleted from the Stack.\n", data);
    print();
    return 0;
}