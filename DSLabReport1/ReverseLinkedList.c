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

void display();
struct node *createNode(struct node *head, int data);
void reverseLinkedList();

int main()
{
    int n;
    printf("How many nodes you want to create : ");
    scanf("%d", &n);
    head = createNode(head, n);
    printf("\nLinked List before reversing : ");
    display();
    reverseLinkedList();
    printf("Linked List after reversing : ");
    display();
    printf("\n");
    return 0;
}

void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void reverseLinkedList()
{
    struct node *PrevNode = NULL;
    struct node *CurrentNode = head;
    struct node *NextNode = NULL;
    while (CurrentNode != NULL)
    {
        NextNode = CurrentNode->next;
        CurrentNode->next = PrevNode;
        PrevNode = CurrentNode;
        CurrentNode = NextNode;
    }
    head = PrevNode;
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