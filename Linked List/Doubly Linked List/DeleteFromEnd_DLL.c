#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head = NULL, *tail;

struct node *create(struct node *head, int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
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

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deletelast()
{
    if (tail == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = tail;
    if (tail->prev != NULL)
    {
        tail = tail->prev;
        tail->next = NULL;
    }
    else
    {
        head = tail = NULL;
    }
    free(temp);
}

int main()
{
    int n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    head = create(head, n);
    display();
    deletelast();
    display();
    return 0;
}