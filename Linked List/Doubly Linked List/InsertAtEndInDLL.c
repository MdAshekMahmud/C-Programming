#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *tail;

struct node *CreateDoublyLinkedlist(struct node *head, int data)
{
    struct node *newnode;
    for (int i = 0; i < data; i++)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter data for node %d : ", i + 1);
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    return head;
}

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct node *InsertAtEnd(struct node *head)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter the data you want to insert : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (tail == NULL)
    {
        newnode->prev = NULL;
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    return head;
}
int main()
{
    struct node *head = NULL;
    int n;
    printf("Enter the number of node : ");
    scanf("%d", &n);

    head = CreateDoublyLinkedlist(head, n);
    printf("Doubly Linked List before Insertion: ");
    display(head);

    head = InsertAtEnd(head);
    printf("Doubly Linked List after Insertion: ");
    display(head);

    return 0;
}