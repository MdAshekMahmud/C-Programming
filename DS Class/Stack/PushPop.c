#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

void push()
{
    int x;
    printf("Enter the element to be pushed: ");
    scanf("%d", &x);
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("Item pushed: %d\n", x);
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Item popped: %d\n", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}