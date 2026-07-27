#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL, *tail;
void createCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct Node *newnode = malloc(sizeof(struct Node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            // tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            // tail->next = head;
        }
        tail->next = head;
    }
}
void insertAtBeginning()
{
    struct Node *newnode = malloc(sizeof(struct Node));
    printf("Enter the data to insert at beginning : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}
void displayCLL()
{
    struct Node *temp;
    if (tail == NULL)
    {
        printf("Empty");
        return;
    }
    else
    {
        temp = tail->next;
    }
    while (temp->next != tail->next)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d \n", temp->data);
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    createCLL(n);
    printf("Circular Linked List Before insertion at beginning : ");
    displayCLL();
    insertAtBeginning();
    printf("Circular Linked List After insertion at beginning : ");
    displayCLL();

    return 0;
}