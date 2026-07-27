#include <stdio.h>
#include <stdlib.h>

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

void display()
{
    if (front == NULL && rear == NULL)
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
}

int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);

    display();
}