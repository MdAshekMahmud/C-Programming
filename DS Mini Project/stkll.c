#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *top = NULL;

int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(int data)
{
    struct stack *newnode = malloc(sizeof(struct stack));
    if (newnode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    newnode->data = data;
    newnode->next = NULL;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow. \n");
        return;
    }
    struct stack *ptr = top;
    printf("%d is popped from stack.\n", top->data);
    top = top->next;
    free(ptr);
}

void display()
{
    if (isEmpty())
    {
        printf("Stack Underflow. \n");
        return;
    }
    struct stack *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);
    printf("Stack before popping item : ");
    display();
    pop();
    printf("Stack after popping item : ");
    display();

    return 0;
}