// Array Implementation
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int Queue[MAX];
int front = -1;
int rear = -1;

bool isFull()
{
    if (rear == MAX - 1)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

void enqueue(int data)
{
    if (isFull())
    {
        printf("Queue is full.\n");
        return;
    }
    else
    {
        if (isEmpty())
        {
            front = rear = 0;
            Queue[rear] = data;
        }
        else
        {
            rear++;
            Queue[rear] = data;
        }
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("Queue elements are : ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();

    return 0;
}