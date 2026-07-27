#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *tail;
void CreateDCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter the data for node : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
    }
}
void Display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    else
    {
        do
        {
            printf("%d->", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("NULL\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    CreateDCLL(n);
    Display();

    return 0;
}