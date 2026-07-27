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

struct node *insertbegining(struct node *head)
{
    int data;
    printf("Enter the data to insert at begining : ");
    scanf("%d", &data);
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = head;
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
    return head;
}

struct node *insertlast(struct node *head)
{
    int data;
    printf("Enter the data to insert at last : ");
    scanf("%d", &data);
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
    return head;
}

struct node *insertspecificpos(struct node *head)
{
    int pos;
    printf("Enter the position : ");
    scanf("%d", &pos);
    int value;
    printf("Enter the valuue to insert at position %d : ", pos);
    scanf("%d", &value);
    if (pos == 1)
    {
        insertbegining(head);
    }
    else
    {
        newnode = malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }
    int i = 1;
    struct node *temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->data = value;
    newnode->prev = temp;
    newnode->next = temp->next;
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

    head = insertbegining(head);
    display(head);

    head = insertlast(head);
    display(head);

    head = insertspecificpos(head);
    display(head);
    return 0;
}