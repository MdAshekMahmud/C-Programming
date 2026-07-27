#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top;

void push(int data)
{
    struct node *newnode = malloc(sizeof(*newnode)); // (*newnode) or (struct node) both are correct.
    if (newnode == NULL)
    {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;

    newnode->link = top;
    top = newnode;
}

void print()
{
    struct node *temp = top;
    printf("The stack elements are : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Print\n");
        printf("3. Quit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the eements to be pushed : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            print();
            break;
        case 3:
            exit(1);
        default:
            printf("Wrong choice..\n");
            break;
        }
    }
}