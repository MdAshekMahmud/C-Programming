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
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node *deleteatpos(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return head;
    }

    struct node *temp = head;

    // Handle deletion of the head node
    if (pos == 1)
    {
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
        return head;
    }

    // Traverse to the node at the specified position
    int i = 1;
    while (temp != NULL && i < pos)
    {
        temp = temp->next;
        i++;
    }

    // If position is out of range
    if (temp == NULL)
    {
        printf("Position out of range.\n");
        return head;
    }

    // Handle deletion of the tail node
    if (temp->next == NULL)
    {
        temp->prev->next = NULL;
        tail = temp->prev;
        free(temp);
        return head;
    }

    // Handle deletion of a node in the middle
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);

    return head;
}

int main()
{
    int n, pos;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    head = create(head, n);
    printf("Original List: ");
    display(head);

    printf("Enter position to delete: ");
    scanf("%d", &pos);
    head = deleteatpos(head, pos);

    printf("List after deletion: ");
    display(head);

    return 0;
}