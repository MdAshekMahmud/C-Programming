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

void ForwardTraversal(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void BackwardTraversal(struct node *tail)
{
    for (struct node *current = tail; current != NULL; current = current->prev)
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
    tail = head;
    while (tail && tail->next != NULL)
    {
        tail = tail->next;
    }

    printf("Doubly Linked List in forward order:\n");
    ForwardTraversal(head);

    printf("Doubly Linked List in reverse order:\n");
    BackwardTraversal(tail);

    return 0;
}