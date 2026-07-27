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

struct node *reverse(struct node *head)
{
    struct node *curr, *nextnode;
    if (head == NULL)
    {
        printf("Empty.\n");
        return head;
    }
    else
    {
        curr = head;
        while (curr != NULL)
        {
            nextnode = curr->next;
            curr->next = curr->prev;
            curr->prev = nextnode;
            if (nextnode == NULL)
            {
                head = curr; // Update the head to the new head (originally the tail)
            }
            curr = nextnode;
        }
    }
    printf("Reversed.\n");
    return head; // Return the new head
}

int main()
{
    int n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    head = create(head, n);
    printf("Original List: ");
    display(head);
    head = reverse(head); // Update the head after reversing
    printf("Reversed List: ");
    display(head);
    return 0;
}