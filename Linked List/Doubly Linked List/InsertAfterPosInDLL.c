#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL, *tail = NULL, *newnode;

struct node *create(struct node *head, int data)
{
    for (int i = 0; i < data; i++)
    {
        newnode = malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter the data for node %d : ", i + 1);
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

struct node *insertspecificpos(struct node *head)
{
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);
    int value;
    printf("Enter the value to insert at position %d : ", pos);
    scanf("%d", &value);
    newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    struct node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Position out of bounds\n");
            return head;
        }
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }
    temp->next = newnode;
    return head;
}

int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    head = create(head, n);
    display(head);
    head = insertspecificpos(head);
    display(head);
    return 0;
}