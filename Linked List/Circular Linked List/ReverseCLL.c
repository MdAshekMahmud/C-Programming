#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *tail;

void createCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
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

void reverse()
{
    struct node *current, *previous, *nextnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == NULL)
    {
        printf("List is empty.");
        return;
    }
    else if (tail->next == tail)
    {
        // If there is only one node, no need to reverse
        printf("List has only one node. No reversal needed.\n");
        return;
    }
    else
    {
        while (current != tail)
        {
            previous = current;
            current = nextnode;
            nextnode = current->next;
            current->next = previous;
        }
        nextnode->next = tail;
        tail = nextnode;
    }
}

void displayCLL()
{
    struct node *temp;
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
    printf("List before reversal : ");
    displayCLL();
    printf("List after reversal : ");
    reverse();
    displayCLL();

    return 0;
}
