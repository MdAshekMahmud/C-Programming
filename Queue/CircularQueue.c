#include <stdio.h>
#include <stdbool.h>
#define MAX 5
int Queue[MAX];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

void Enqueue(int val)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is full.\n");
        return;
    }
    else if (isEmpty())
    {
        front = rear = 0;
        Queue[rear] = val;
    }
    else
    {
        rear = (rear + 1) % MAX;
        Queue[rear] = val;
    }
}

void Dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Dequeued element is = %d\n", Queue[front]);

    if (front == rear)
    {
        // Last element is being removed
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear)
    {
        printf("%d ", Queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", Queue[rear]);
}

void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", Queue[front]);
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
            Enqueue(data);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Wrong choice.\n");
        }
    }
    return 0;
}