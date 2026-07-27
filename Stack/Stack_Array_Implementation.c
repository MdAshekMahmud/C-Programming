#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int Stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow.\n");
        return;
    }
    top = top + 1;
    Stack_arr[top] = data;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    int value;
    value = Stack_arr[top];
    top = top - 1;
    return value;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return Stack_arr[top];
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return;
    }
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", Stack_arr[i]);
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
        printf("5. quit\n");
        printf("Please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed : ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is : %d\n", data);
            break;
        case 3:
            printf("The topmost element of the stack is : %d\n", peek());
            break;
        case 4:
            printf("Elements in the stack is : ");
            print();
            break;
        case 5:
            exit(1);
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}