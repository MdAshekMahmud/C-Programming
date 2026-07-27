#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 50;

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
        printf("Stack Overflow.\n");
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

int pop()
{
    struct node *ptr = top;
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    int data = ptr->data;
    top = top->link;
    free(ptr);
    // top = NULL;
    return data;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return top->data;
}

void print_element()
{
    struct node *temp = top;
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
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
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the element of the stack\n");
        printf("5. Quit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            printf("Deleted element is : %d\n", pop());
            break;
        case 3:
            printf("The topmost element of the stack is : %d\n", peek());
            break;
        case 4:
            print_element();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong choice..\n");
            break;
        }
    }
}