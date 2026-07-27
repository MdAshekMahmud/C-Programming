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
struct node *deleteWithGivenValue(struct node *head, int Value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != Value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == Value)
    {
        p->next = q->next;
        free(q);
    }
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

    printf("Linked list before deletion with value 2:\n");
    linkedListTraversal(head);

    head = deleteWithGivenValue(head, 4);
    printf("Linked list after deletion with value 2:\n");
    linkedListTraversal(head);

    return 0;
}