#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;

int main()
{
    // struct node *head = NULL, *temp, *newnode;
    int choice = 1, i = 1;
    while (choice)
    {
        newnode = malloc(sizeof(struct node));
        printf("Enter data for node %d : ", i++);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue (0,1) ? : ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}