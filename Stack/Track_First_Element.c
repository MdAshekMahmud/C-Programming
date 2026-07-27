/*Write a program to implement a stack in an array Stack_arr[] using
Stack_arr[0] as the top element. */
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

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
}