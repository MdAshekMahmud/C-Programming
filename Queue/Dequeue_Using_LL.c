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

    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

bool isEmpty()
{
    if (front == NULL && rear == NULL)
        return true;
    else
        return false;
}

void dequeue()
{
    struct Queue *temp = front;
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        printf("Deleted item is = %d \n", front->data);
        front = front->next;
        free(temp);
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

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    display();
    dequeue();
    display();

    return 0;
}