#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *CreateDoublyLinkedlist(struct node *head, int data)
{
    struct node *temp, *newnode;
    for (int i = 0; i < data; i++)
    {
        newnode = malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter data for node %d : ", i + 1);
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    return head;
}

void display(struct node *head)
{
    for (struct node *current = head; current != NULL; current = current->next)
    {
        printf("%d ", current->data);
    }
}

int main()
{
    struct node *head = NULL;
    struct node *tail = NULL;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = CreateDoublyLinkedlist(head, n);
    display(head);

    return 0;
}