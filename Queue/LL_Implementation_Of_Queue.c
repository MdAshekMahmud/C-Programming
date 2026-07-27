#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *front = NULL;
struct Queue *rear = NULL;

bool isEmpty()
{
    if (front == NULL)
        return true;
    else
        return false;
}

void Enqueue(int data)
{
    struct Queue *newnode = malloc(sizeof(struct Queue));
    if (newnode == NULL)
    {
        printf("Queue is full.\n");
        return;
    }
    newnode->data = data;
    newnode->next = NULL;

    if (isEmpty())
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void Dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        struct Queue *temp = front;
        printf("Deleted item is = %d \n", front->data);
        front = front->next;
        free(temp);
        if (front == NULL)
        {
            rear == NULL;
        }
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        printf("Front element is = %d \n", front->data);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    struct Queue *temp = front;
    printf("Elements are : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeQueue()
{
    while (!isEmpty())
    {
        Dequeue();
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
        printf("5. Exit.\n");
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
        case 5:
            freeQueue();
            exit(0);
        default:
            printf("Wrong choice.\n");
        }
    }
    return 0;
}