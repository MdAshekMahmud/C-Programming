#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *link;
};

bool isEmpty(struct node **top)
{
    if (*top == NULL)
        return true;
    else
        return false;
}

void push(int data, struct node **top1)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;

    newnode->link = *top1;
    *top1 = newnode;
}

int pop(struct node **top)
{
    if (*top == NULL)
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node *temp = *top;
    int value = temp->data;
    *top = (*top)->link;
    free(temp);
    temp = NULL;
    return value;
}

void reverse_stack(struct node **top)
{
    struct node *top1 = NULL;
    struct node *top2 = NULL;
    // Pushing onto temp stack 1
    while (*top != NULL)
    {
        push(pop(top), &top1);
    }
    // Pushing onto temp stack 2
    while (top1 != NULL)
    {
        push(pop(&top1), &top2);
    }
    // Pushing onto original stack
    while (top2 != NULL)
    {
        push(pop(&top2), top);
    }
}

void print(struct node **top)
{
    struct node *temp = *top;
    if (isEmpty(top))
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    printf("Stack elements are : ");
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
    struct node *top = NULL;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Print\n");
        printf("3. Reverse the stack\n");
        printf("4. Quit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d", &data);
            push(data, &top);
            break;
        case 2:
            print(&top);
            break;
        case 3:
            reverse_stack(&top);
            printf("Stack is reversed.\n");
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice..\n");
            break;
        }
    }
    return 0;
}