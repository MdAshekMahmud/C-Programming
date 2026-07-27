#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *tail = NULL;
void createCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct Node *newnode = malloc(sizeof(struct Node));
        printf("Enter data : ");
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
            tail = newnode;
        }
    }
}
void deleteFromEnd()
{
    struct Node *current, *previous;
    current = tail->next;
    if (tail == NULL)
    {
        printf("List is Empty.");
        return;
    }
    else if (current->next == current)
    {
        tail = NULL;
        free(current);
    }
    else
    {
        while (current->next != tail->next)
        {
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;
        free(current);
    }
}
void displayCLL()
{
    struct Node *temp;
    if (tail == NULL)
    {
        printf("List is Empty");
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
    printf("List before deleting from end : ");
    displayCLL();
    deleteFromEnd();
    printf("List after deleting from end : ");
    displayCLL();

    return 0;
}