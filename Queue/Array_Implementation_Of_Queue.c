#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#define MAX 100
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

void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("The topmost / front element is = %d\n", Queue[front]);
    }
}

int main()
{
    int data, choice;
    while (1)
    {
        printf("1. Enqueue.\n");
        printf("2. Dequeue.\n");
        printf("3. Display front element.\n");
        printf("4. Display all elements.\n");
        printf("Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Wrong choice.\n");
            exit(1);
        }
    }
    return 0;
}