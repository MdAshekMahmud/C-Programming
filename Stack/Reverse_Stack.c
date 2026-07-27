/*Reverse a stack using two temporary stack*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Stack Overfloaw.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;

    newnode->link = top;
    top = newnode;
}

bool isEmpty()
{
    if (top == NULL)
        return true;
    else
        return false;
}

void print()
{
    struct node *temp = top;
    if (isEmpty())
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
    push(1);
    push(2);
    push(3);
    print();

    return 0;
}