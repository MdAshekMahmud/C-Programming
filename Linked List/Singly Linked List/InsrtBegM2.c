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
void insertAtFirst(struct node **head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = *head;
    ptr->data = data;
    *head = ptr;
}
int main()
{
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    insertAtFirst(&head, 56);

    printf("Linked list after insertion at the beginning:\n");
    linkedListTraversal(head);

    return 0;
}