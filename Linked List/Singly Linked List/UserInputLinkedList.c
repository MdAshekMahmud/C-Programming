#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;

void display() // this uses the global head pointer to traverse the linked list
{
    temp = head; // Use a temporary pointer to traverse, so that the head pointer is not lost
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *createNode(struct node *head, int data)
{
    for (int i = 0; i < data; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node : ");
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

int main()
{
    int n;
    printf("How many nodes you want to create : ");
    scanf("%d", &n);
    head = createNode(head, n);
    display();
}