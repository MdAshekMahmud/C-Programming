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

void deleteFromSpecificPosition(int position)
{
    struct Node *current, *previous;
    int count = 1;

    if (tail == NULL)
    {
        printf("List is Empty.\n");
        return;
    }

    current = tail->next;

    // If deleting the first node
    if (position == 1)
    {
        if (current->next == current) // Only one node in the list
        {
            tail = NULL;
            free(current);
        }
        else
        {
            tail->next = current->next;
            free(current);
        }
        return;
    }

    // Traverse to the node at the given position
    while (count < position && current->next != tail->next)
    {
        previous = current;
        current = current->next;
        count++;
    }

    // If position is invalid
    if (count != position)
    {
        printf("Invalid position.\n");
        return;
    }

    // Delete the node
    previous->next = current->next;

    // If deleting the last node, update the tail pointer
    if (current == tail)
    {
        tail = previous;
    }

    free(current);
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
    int position;
    printf("Enter the position : ");
    scanf("%d", &position);
    printf("List before deleting from %d position : ", position);
    displayCLL();
    deleteFromSpecificPosition(position);
    printf("List after deleting from %d position : ", position);
    displayCLL();

    return 0;
}