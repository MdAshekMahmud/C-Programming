#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter data : ");
    scanf("%d", &x);
    if (top == N - 1) // Fixed the condition here
    {
        printf("Overflow.\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow.\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Popped item = %d\n", item);
    }
}

void peek()
{
    if (top == -1)
        printf("Empty.\n");
    else
    {
        printf("Top is = %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main(void)
{
    int choice;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
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
            return;
        default:
            printf("Invalid choice.\n");
        }
    }
}