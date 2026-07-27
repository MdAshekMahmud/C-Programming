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
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            newnode->next = head;
            newnode->prev = head;
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
void DeleteFromEnd()
{
    struct node *temp = tail;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    else if (head->next == head)
    {
        head = tail = NULL;
        free(temp);
    }
    else
    {
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(temp);
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
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    CreateDCLL(n);
    printf("Linked list before deleting from end : ");
    Display();
    DeleteFromEnd();
    printf("Linked list after deleting from end : ");
    Display();

    return 0;
}