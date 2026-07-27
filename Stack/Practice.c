#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int Stack[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow.");
        return;
    }
    else
    {
        Stack[++top] = data;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack Underflow.");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", Stack[i]);
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
}