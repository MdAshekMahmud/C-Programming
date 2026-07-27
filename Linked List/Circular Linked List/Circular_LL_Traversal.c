#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *createCLL(struct node *head, int data)
{
    struct node *temp = NULL;
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = calloc(1, sizeof(struct node));
        printf("Enter data for node %d : ", i + 1);
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
        temp->next = head;
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp->next != head)
    {
        printf("%d-> ", temp->data);
        temp = temp->next;
    }
    printf("%d->", temp->data);
    printf("NULL\n");
}

void reverse()
{
    struct node *prev, *current, *nextnode;
    prev = NULL;
    current = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;
}

int main()
{
    int n;
    printf("Number of nodes : ");
    scanf("%d", &n);
    head = createCLL(head, n);
    printf("Display Circular linked list : ");
    display(head);

    return 0;
}