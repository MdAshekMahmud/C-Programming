
#include <stdio.h>
#include <stdlib.h>

void push(int stack[], int *top, int maxstk, int item)
{
    if (*top < maxstk - 1)
    {
        stack[++(*top)] = item;
        printf("Item pushed: %d\n", item);
    }
    else
    {
        printf("Stack overflow\n");
    }
}

int pop(int stack[], int *top)
{
    if (*top >= 0)
    {
        printf("Item popped: %d\n", stack[*top]);
        return stack[(*top)--];
    }
    else
    {
        printf("Stack underflow\n");
        return -1;
    }
}

int main()
{
    int stack[5];
    int top = -1;
    int maxstk = 5;

    push(stack, &top, maxstk, 10);
    push(stack, &top, maxstk, 20);
    push(stack, &top, maxstk, 30);
    push(stack, &top, maxstk, 40);
    push(stack, &top, maxstk, 50);
    push(stack, &top, maxstk, 60);

    pop(stack, &top);
    pop(stack, &top);
    pop(stack, &top);
    pop(stack, &top);
    pop(stack, &top);
    pop(stack, &top);

    return 0;
}