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

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

int main()
{
    struct node *head, *second, *third;

    // Allocate memory for three nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 1;
    head->next = second;

    // Link second and third nodes
    second->data = 2;
    second->next = third;

    // Terminate the list at the third node
    third->data = 3;
    third->next = NULL;

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    // head = insertAtFirst(head, 56);
    head = insertAtIndex(head, 56, 2);

    printf("Linked list after insertion at the beginning:\n");
    linkedListTraversal(head);

    return 0;
}