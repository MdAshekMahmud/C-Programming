#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *head = NULL;

struct node *create(struct node *head, int data)
{
    struct node *temp;
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
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

void deletebeg()
{
    struct node *temp;
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        head = head->next;
        return;
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
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
    deletebeg();
    display();
    return 0;
}