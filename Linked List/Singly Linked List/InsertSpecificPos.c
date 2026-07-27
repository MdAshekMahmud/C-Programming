#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *temp = NULL, *newnode = NULL;

struct node *Create(struct node *head, int data)
{
    for (int i = 0; i < data; i++)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the value of node %d : ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *insertatpos(struct node *head, int pos)
{
    struct node *newnode = malloc(sizeof(struct node));
    struct node *temp = head;
    int data;
    printf("Enter the data to insert at position %d : ", pos);
    scanf("%d", &data);
    newnode->data = data;
    if (pos < 1)
    {
        return head;
    }
    if (pos == 1)
    {
        newnode->next = head;
        return newnode;
    }
    int i = 1;
    while (i < pos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
    {
        return head;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

int main()
{
    int n;
    printf("Number of nodes : ");
    scanf("%d", &n);
    head = Create(head, n);
    display(head);

    int pos;
    printf("\nEnter the position : ");
    scanf("%d", &pos);
    head = insertatpos(head, pos);
    printf("After inserting at position %d : ", pos);
    display(head);
}