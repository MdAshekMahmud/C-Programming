#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head);
struct node *CreateNode(struct node *head, int data);
struct node *InsertBeginning(struct node *head, int data);
struct node *InsertEnd(struct node *head, int data);
struct node *InsertAtIndex(struct node *head, int data, int index);

int main()
{
    struct node *head = NULL;

    int n;
    printf("Number of nodes : ");
    scanf("%d", &n);

    head = CreateNode(head, n);

    printf("\nLinked list before insertion : ");
    display(head);

    int data;
    printf("Enter the data you want to insert at beginning : ");
    scanf("%d", &data);
    head = InsertBeginning(head, data);

    printf("\nLinked list after inserting at beginning : ");
    display(head);

    int enddata;
    printf("Enter the data you want to insert at end : ");
    scanf("%d", &enddata);
    head = InsertEnd(head, enddata);
    printf("\nLinked list after inserting at end : ");
    display(head);

    int index;
    printf("Enter index number : ");
    scanf("%d", &index);
    int value;
    printf("Enter value for node %d : ", index);
    scanf("%d", &value);
    head = InsertAtIndex(head, value, index);
    printf("\nLinked list after inserting at index %d : ", index);
    display(head);

    return 0;
}

struct node *CreateNode(struct node *head, int data)
{
    struct node *temp = NULL;
    struct node *newnode = NULL;
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter the data for node %d : ", i + 1);
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
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n\n");
}
struct node *InsertBeginning(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct node *InsertEnd(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    ptr->data = data;
    ptr->next = NULL;

    if (head == NULL)
    {
        return ptr;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;

    return head;
}
struct node *InsertAtIndex(struct node *head, int data, int index)
{
    if (index == 0)
    {
        return InsertBeginning(head, data);
    }

    struct node *ptr = malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    struct node *temp = head;
    ptr->data = data;
    int i = 0;

    while (i < index - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        printf("Index out of bounds\n");
        free(ptr);
        return head;
    }

    ptr->next = temp->next;
    temp->next = ptr;

    return head;
}