#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deleteAtIndex(struct node *head, int Index)
{
    struct node *nextnode;
    struct node *temp = head;
    // Base case if linked list is empty
    if (temp == NULL)
        return head;

    // Case 1: Head is to be deleted
    if (Index == 1)
    {
        head = temp->next;
        free(temp);
        return head;
    }
    int i = 1;
    while (i < Index - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
    return head;
}

int main()
{
    struct node *head, *first, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    printf("Linked list before deletion from index 3:\n");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 1);
    printf("Linked list after deletion from index 3:\n");
    linkedListTraversal(head);

    return 0;
}