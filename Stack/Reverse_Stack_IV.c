#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *link;
};

bool isEmpty(struct node *top)
{
    if (top == NULL)
        return true;
    else
        return false;
}

struct node *pop(struct node *top)
{
    struct node *temp;
    if (isEmpty(top))
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    temp = top;
    top = top->link;
    return temp;
}

struct node *push(int data, struct node *top)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;

    newnode->link = top;
    top = newnode;
    return top;
}

void print(struct node *top)
{
    struct node *temp = top;
    if (isEmpty(top))
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
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
    struct node *temp;

    top = push(1, top);
    top = push(2, top);
    top = push(3, top);

    temp = pop(top);
    top = temp->link;
    top1 = push(temp->data, top1);

    temp = pop(top);
    top = temp->link;
    top1 = push(temp->data, top1);

    temp = pop(top);
    top = temp->link;
    top1 = push(temp->data, top1);

    // print(top);
    print(top1);
}