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
struct node *deleteLastElement(struct node *head)
{
    struct node *prev;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        prev->next = NULL;
    }
    free(temp);
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

    printf("Linked list before deletion from the end:\n");
    linkedListTraversal(head);

    head = deleteLastElement(head);
    printf("Linked list after deletion from the end:\n");
    linkedListTraversal(head);

    return 0;
}