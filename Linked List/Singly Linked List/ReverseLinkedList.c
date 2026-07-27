#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *create(struct node *head, int data)
{
    struct node *temp = NULL;
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
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
    }
    return head;
}

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d-> ", head->data);
        head = head->next;
    }
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
    head = create(head, n);
    printf("Before reverse : ");
    display(head);

    printf("After reverse : ");
    reverse();
    display(head);

    return 0;
}