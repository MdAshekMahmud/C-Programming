#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *tail;
void CreateDCLL(int data)
{
    for (int i = 0; i < data; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            newnode->next = head;
            newnode->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head;
            head->prev = newnode;
            tail = newnode;
        }
    }
}
void DeleteFromSpecificPosition()
{
    int pos, i = 1;
    struct node *temp = head, *toDelete;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos == 1)
    {
        if (head->next == head) // Only one node in the list
        {
            free(head);
            head = NULL;
            tail = NULL;
        }
        else
        {
            toDelete = head;
            head = head->next;
            head->prev = tail;
            tail->next = head;
            free(toDelete);
        }
    }
    else
    {
        while (i < pos && temp->next != head)
        {
            temp = temp->next;
            i++;
        }

        if (i != pos)
        {
            printf("Invalid position.\n");
            return;
        }

        toDelete = temp;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        if (toDelete == tail)
        {
            tail = temp->prev;
        }

        free(toDelete);
    }
}
void Display()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    else
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of node : ");
    scanf("%d", &n);
    CreateDCLL(n);
    printf("Linked list before deleting from given position : ");
    Display();
    DeleteFromSpecificPosition();
    printf("Linked list after deleting from given position : ");
    Display();

    return 0;
}