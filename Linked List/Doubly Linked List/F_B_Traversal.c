#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head = NULL, *tail = NULL; // Initialize both head and tail

struct node *create(struct node *head, int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter the data of node %d : ", i + 1);
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;

        if (head == NULL)
        {
            // If the list is empty, set both head and tail to the new node
            head = tail = newnode;
        }
        else
        {
            // Append the new node to the end of the list
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode; // Update tail to the new node
        }
    }
    return head; // Return the head of the list
}

void displayForward(struct node *head)
{
    printf("Forward Traversal: ");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayBackward(struct node *tail)
{
    printf("Backward Traversal: ");
    struct node *temp = tail;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    head = create(head, n);

    // Display the list in forward order (using head)
    displayForward(head);

    // Display the list in backward order (using tail)
    displayBackward(tail);

    return 0;
}