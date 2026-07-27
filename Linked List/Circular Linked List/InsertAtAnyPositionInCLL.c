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
void insertAtSpecificPosition(int position)
{
    struct Node *newnode, *temp;
    newnode = malloc(sizeof(struct Node));
    printf("Enter the data to insert at position %d : ", position);
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (position == 1) // Insert at the beginning
    {
        if (tail == NULL) // If the list is empty
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
    else
    {
        temp = tail->next;
        int i;
        for (i = 1; i < position - 1 && temp != tail; i++) // Traverse to the position
        {
            temp = temp->next;
        }
        if (i == position - 1) // Valid position
        {
            newnode->next = temp->next;
            temp->next = newnode;
            if (temp == tail) // If inserted at the end, update tail
            {
                tail = newnode;
            }
        }
        else
        {
            printf("Invalid position!\n");
            free(newnode);
        }
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
    int pos;
    printf("Enter the position to insert : ");
    scanf("%d", &pos);
    printf("Circular Linked List Before inserting at position %d : ", pos);
    displayCLL();
    insertAtSpecificPosition(pos);
    printf("Circular Linked List After inserting at position %d : ", pos);
    displayCLL();

    return 0;
}