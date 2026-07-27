// Doubly Linked List using for loop to take node and data
#include <stdio.h>
#include <stdlib.h>
struct st
{
    int data;
    struct st *next, *prev;
} *head = NULL, *temp = NULL, *last = NULL, *tail = NULL;

typedef struct st br;

void creation()
{
    int i, num;
    printf("Enterb the node number:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {

        if (temp == NULL)
        {
            printf("Enter the data to node: ");
            temp = (br *)malloc(sizeof(br));
            scanf("%d", &temp->data);
            head = temp;
            last = temp;
            head->prev = NULL; // only for doubly linked list purpose
        }
        else
        {
            temp = (br *)malloc(sizeof(br));
            printf("Enter the vale to node:");
            scanf("%d", &temp->data);
            last->next = temp;
            temp->prev = last; // only for doubly linked list purpose
            last = temp;
        }
    }
    last->next = NULL;

    printf("Node Created Succesfully\n");
}
void NextNode()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void PrevNode()
{
    temp = last;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL");
}
int main()
{
    int option;
    while (1)
    {
        printf("\n1. Creation\n");
        printf("2. Next\n");
        printf("3. Prev\n");
        printf("Enter you option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            creation();
            break;
        case 2:
            NextNode();
            break;
        case 3:
            PrevNode();
            break;
        default:
            printf("Wrong Choise--Please Try Again:\n");
            break;
        }
    }

    return 0;
}