#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int front = -1;
int rear = -1;
int size = 3;
int queue[3];

void insert()
{
    if (rear == 3) // rear == size - 1
    {
        printf("Queue is full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        printf("Enter element to enqueue: ");
        scanf("%d", &queue[rear]);
    }
}

void delete()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted data: %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int option;
    do
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid option, please try again.\n");
        }
    } while (true);

    return 0;
}