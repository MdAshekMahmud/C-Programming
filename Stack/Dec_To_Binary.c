#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50
int Stack[MAX];
int top = -1;

bool isFull()
{
    if (top == MAX - 1)
        return true;
    else
        return false;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow.\n");
        exit(1);
    }
    top++;
    Stack[top] = data;
}

bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    int value = Stack[top];
    top--;
    return value;
}

void dec2bin(int n)
{
    while (n != 0)
    {
        push(n % 2);
        n = n / 2;
    }
}

void print_binary()
{
    if (isEmpty())
    {
        printf("Stack Underflow... Nothing to print....\n");
        return;
    }
    while (top != -1)
    {
        printf("%d ", pop());
    }
}

int main()
{
    int value;
    printf("Enter the decimal value : ");
    scanf("%d", &value);
    dec2bin(value);
    print_binary();
}