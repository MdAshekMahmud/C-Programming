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
int getlength()
{
    int count = 0;
    struct node *temp = head;
    if (head == NULL)
    {
        return count;
    }
    else
    {
        do
        {
            count++;
            temp = temp->next;
        } while (temp != head);
    }
    return count;
}
void insertAtBeginning()
{
    struct node *newnode = malloc(sizeof(struct node));
    printf("Enter the data to insert at beginning : ");
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
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }
}
void insertAtPosition(int position)
{
    struct node *newnode, *temp = head;
    int i = 1, length = getlength();
    if (position < 1 || position > length + 1) // Allow insertion at the end as well
    {
        printf("Invalid Position.\n");
        return;
    }
    else if (position == 1)
    {
        insertAtBeginning();
    }
    else if (position == length + 1) // Special case for inserting at the end
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d", &newnode->data);
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
    else
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter the data to be inserted : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    CreateDCLL(n);
    int position;
    printf("Enter the position to insert : ");
    scanf("%d", &position);
    printf("Linked List Before Inserting At Position : ");
    Display();
    insertAtPosition(position);
    printf("Linked List Before Inserting At Position %d : ", position);
    Display();

    return 0;
}