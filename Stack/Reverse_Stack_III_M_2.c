#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *link;
};

void push(int data, struct node **top)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;

    newnode->link = *top;
    *top = newnode;
}

bool isEmpty(struct node *top)
{
    if (top == NULL)
        return true;
    else
        return false;
}

void print(struct node *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    struct node *top = NULL;
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    push(1, &top);
    push(2, &top);
    push(3, &top);
    print(top);

    return 0;
}