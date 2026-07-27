#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5
int Stack_arr[MAX];
int first = -1;

bool isFull()
{
    if (first == MAX - 1)
        return true;
    else
        return false;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow.\n");
        return;
    }
    first += 1;
    for (int i = first; i > 0; i--)
    {
        Stack_arr[i] = Stack_arr[i - 1];
    }
    Stack_arr[0] = data;
}

bool isEmpty()
{
    if (first == -1)
        return true;
    else
        return false;
}

int pop()
{
    int value = Stack_arr[0];
    for (int i = 0; i < first; i++)
    {
        Stack_arr[i] = Stack_arr[i + 1];
    }
    first--;
    return value;
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return;
    }
    for (int i = 0; i <= first; i++)
    {
        printf("%d ", Stack_arr[i]);
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return Stack_arr[0]; // Here Stack_arr[0] always holds the last inserted element, or top element
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    int data = pop();
    printf("Deleted item : %d\n", data);
    print();

    return 0;
}