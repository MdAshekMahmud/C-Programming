#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int Stack_arr[MAX];
int first = -1;

int isFull()
{
    if (first == MAX - 1)
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
    first++;
    for (int i = first; i > 0; i--)
    {
        Stack_arr[i] = Stack_arr[i - 1];
    }
    Stack_arr[0] = data;
}

int isEmpty()
{
    if (first == -1)
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
    int value = Stack_arr[0];
    for (int i = 0; i < first; i++)
    {
        Stack_arr[i] = Stack_arr[i + 1];
    }
    first--;
    return value;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return Stack_arr[0];
}

void print()
{
    if (isEmpty())
    {
        printf("Stack Underflow.\n");
        return;
    }
    for (int i = 0; i <= first; i++) // here top element is at index 0
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
        printf("3. Print the first element\n");
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
            printf("The firstmost element of the stack is : %d\n", peek());
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