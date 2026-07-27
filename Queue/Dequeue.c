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
        printf("Queue is full (%d cannot be inserted.)\n", data);
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

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            printf("Deleted element is : %d\n", Queue[front]);
            front++;
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
        printf("Queue elements: ");
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
    enqueue(4);
    enqueue(5);
    enqueue(6);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();

    return 0;
}